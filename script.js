// Function to fetch data from Google Sheets
async function fetchData() {
    const response = await fetch('https://sheets.googleapis.com/v4/spreadsheets/1--TVdrnHt6WOjfxu-OFeQ36cNv3kqnTvtZrDSxnKH5I/values/Sheet1?key=YOUR_API_KEY');
    const data = await response.json();
    const statusContainer = document.getElementById('status-container');

    data.values.forEach((row) => {
        const statusCard = document.createElement('div');
        statusCard.classList.add('status-card');

        // Add class based on signal status (green, amber, red)
        const status = row[1].toLowerCase();
        if (status === 'green') statusCard.classList.add('green');
        else if (status === 'amber') statusCard.classList.add('amber');
        else if (status === 'red') statusCard.classList.add('red');

        statusCard.innerHTML = `
            <h3>${row[0]}</h3>
            <p>Status: ${row[1]}</p>
        `;
        statusContainer.appendChild(statusCard);
    });
}

// Call the fetch function when the page loads
document.addEventListener('DOMContentLoaded', fetchData);
