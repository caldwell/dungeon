// Copyright © 2022 David Caldwell <david@porkrind.org>

export function create(element_id) {
    var map = window.map = L.map(element_id, {
        crs: L.CRS.Simple,
        zoomSnap: .1,
        minZoom: 1,
    });
    L.tileLayer('/map/{z}/{x}/{y}.png', {
        maxZoom: 5,
        detectRetina: true,
        attribution: '&copy; 1982 Steven Roy'
    }).addTo(map);

    map.on('click', (event) => console.log(event));

    // show the scale bar on the lower left corner
    //L.control.scale({imperial: true, metric: true}).addTo(map);

    // show a marker on the map
    //let marker = L.marker({lat: -143.97173725414277, lng: 181.53841058561866}).bindPopup('It all starts here...').addTo(map);

    map.setView({lat: -143.97173725414277, lng: 181.53841058561866}, 2)
    //map.setView(marker.getLatLng(), 2)
    return map;
}

export default { create };
