<!DOCTYPE html><html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Eid Gift</title>
    <style>
        body {
            text-align: center;
            font-family: Arial, sans-serif;
            background-color: #f4f4f4;
            padding: 50px;
        }
        .container {
            background: white;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.1);
            display: inline-block;
        }
        button {
            padding: 10px 20px;
            border: none;
            background: green;
            color: white;
            font-size: 16px;
            cursor: pointer;
            margin-top: 10px;
        }
        button:hover {
            background: darkgreen;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>🎁 Eid Mubarak! 🎉</h1>
        <p>Click the button to receive your Eid Gift!</p>
        <button onclick="showGift()">Open Gift</button>
        <p id="giftMessage" style="display:none; font-size: 18px; margin-top: 10px; color: green;">🎉 You got a special Eid surprise! 🎁</p>
    </div><script>
    function showGift() {
        document.getElementById("giftMessage").style.display = "block";
    }
</script>

</body>
</html>