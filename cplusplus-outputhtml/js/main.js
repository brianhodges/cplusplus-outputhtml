BOLD = 'bold';

$(document).on("click", "tbody tr", function (e) {
    var curWeight = $.trim($(this).css("font-weight").toString().toLowerCase());
    (curWeight === BOLD) ? $(this).css("font-weight", "normal") : $(this).css("font-weight", "bold");
});