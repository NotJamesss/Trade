body {
    font-family: Arial, sans-serif;
    background-color: #f4f4f4;
    margin: 0;
    padding: 0;
}

.container {
    max-width: 1200px;
    margin: 0 auto;
    padding: 20px;
}

header {
    text-align: center;
    margin-bottom: 40px;
}

header h1 {
    font-size: 2.5rem;
    color: #333;
}

header p {
    font-size: 1rem;
    color: #555;
}

#status-container {
    display: flex;
    flex-wrap: wrap;
    justify-content: space-between;
}

.status-card {
    background-color: #fff;
    padding: 20px;
    border-radius: 8px;
    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
    margin-bottom: 20px;
    width: 30%;
    text-align: center;
}

.status-card.green {
    background-color: #d4edda;
}

.status-card.amber {
    background-color: #fff3cd;
}

.status-card.red {
    background-color: #f8d7da;
}

.status-card h3 {
    margin-top: 0;
}

@media (max-width: 768px) {
    .status-card {
        width: 48%;
    }
}

@media (max-width: 480px) {
    .status-card {
        width: 100%;
    }
}
