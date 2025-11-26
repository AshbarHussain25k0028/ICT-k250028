let items = document.querySelectorAll(".fade");

function showItems() {
    for (let i = 0; i < items.length; i++) {
        let itemTop = items[i].getBoundingClientRect().top;
        if (itemTop < window.innerHeight - 50) {
            items[i].classList.add("show");
        }
    }
}

window.addEventListener("scroll", showItems);
showItems();
