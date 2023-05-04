/* Copyright 2023 Gabriel Roberto - O robertonto.
===========================================*/


#define CATCH_CONFIG_MAIN
#include "./catch.hpp"
#include "./romanos.hpp"

TEST_CASE("Numeros romanos - algarismos únicos", "[romanos]") {
    REQUIRE(romanos_para_decimal("I") == 1);
    REQUIRE(romanos_para_decimal("V") == 5);
    REQUIRE(romanos_para_decimal("X") == 10);
    REQUIRE(romanos_para_decimal("L") == 50);
    REQUIRE(romanos_para_decimal("C") == 100);
    REQUIRE(romanos_para_decimal("D") == 500);
    REQUIRE(romanos_para_decimal("M") == 1000);
}

TEST_CASE("Numeros romanos - algarismos inválidos", "[romanos]") {
    REQUIRE(romanos_para_decimal("G") == -1);

    REQUIRE(romanos_para_decimal("i") == -1);
}

TEST_CASE("Numeros romanos - combinações simples", "[romanos]") {
    REQUIRE(romanos_para_decimal("II") == 2);
    REQUIRE(romanos_para_decimal("III") == 3);
    REQUIRE(romanos_para_decimal("XX") == 20);
    REQUIRE(romanos_para_decimal("XXX") == 30);
    REQUIRE(romanos_para_decimal("CC") == 200);
    REQUIRE(romanos_para_decimal("CCC") == 300);
    REQUIRE(romanos_para_decimal("MM") == 2000);
    REQUIRE(romanos_para_decimal("MMM") == 3000);
}

TEST_CASE("Numeros romanos - combinações complexas", "[romanos]") {
    REQUIRE(romanos_para_decimal("IV") == 4);
    REQUIRE(romanos_para_decimal("VI") == 6);
    REQUIRE(romanos_para_decimal("VII") == 7);
    REQUIRE(romanos_para_decimal("VIII") == 8);
    REQUIRE(romanos_para_decimal("IX") == 9);
    // 11-20
    REQUIRE(romanos_para_decimal("XI") == 11);
    REQUIRE(romanos_para_decimal("XII") == 12);
    REQUIRE(romanos_para_decimal("XIII") == 13);
    REQUIRE(romanos_para_decimal("XIV") == 14);
    REQUIRE(romanos_para_decimal("XV") == 15);
    REQUIRE(romanos_para_decimal("XVI") == 16);
    REQUIRE(romanos_para_decimal("XVII") == 17);
    REQUIRE(romanos_para_decimal("XVIII") == 18);
    REQUIRE(romanos_para_decimal("XIX") == 19);
    // 21-30
    REQUIRE(romanos_para_decimal("XXI") == 21);
    REQUIRE(romanos_para_decimal("XXII") == 22);
    REQUIRE(romanos_para_decimal("XXIII") == 23);
    REQUIRE(romanos_para_decimal("XXIV") == 24);
    REQUIRE(romanos_para_decimal("XXV") == 25);
    REQUIRE(romanos_para_decimal("XXVI") == 26);
    REQUIRE(romanos_para_decimal("XXVII") == 27);
    REQUIRE(romanos_para_decimal("XXVIII") == 28);
    REQUIRE(romanos_para_decimal("XXIX") == 29);
    // 31-40
    REQUIRE(romanos_para_decimal("XXXI") == 31);
    REQUIRE(romanos_para_decimal("XXXII") == 32);
    REQUIRE(romanos_para_decimal("XXXIII") == 33);
    REQUIRE(romanos_para_decimal("XXXIV") == 34);
    REQUIRE(romanos_para_decimal("XXXV") == 35);
    REQUIRE(romanos_para_decimal("XXXVI") == 36);
    REQUIRE(romanos_para_decimal("XXXVII") == 37);
    REQUIRE(romanos_para_decimal("XXXVIII") == 38);
    REQUIRE(romanos_para_decimal("XXXIX") == 39);
    REQUIRE(romanos_para_decimal("XL") == 40);
    // 41-45
    REQUIRE(romanos_para_decimal("XLI") == 41);
    REQUIRE(romanos_para_decimal("XLII") == 42);
    REQUIRE(romanos_para_decimal("XLIII") == 43);
    REQUIRE(romanos_para_decimal("XLIV") == 44);
    REQUIRE(romanos_para_decimal("XLV") == 45);
    // 90-95
    REQUIRE(romanos_para_decimal("XC") == 90);
    REQUIRE(romanos_para_decimal("XCI") == 91);
    REQUIRE(romanos_para_decimal("XCII") == 92);
    REQUIRE(romanos_para_decimal("XCIII") == 93);
    REQUIRE(romanos_para_decimal("XCIV") == 94);
    REQUIRE(romanos_para_decimal("XCV") == 95);
    // 400-420
    REQUIRE(romanos_para_decimal("CD") == 400);
    REQUIRE(romanos_para_decimal("CDI") == 401);
    REQUIRE(romanos_para_decimal("CDII") == 402);
    REQUIRE(romanos_para_decimal("CDIII") == 403);
    REQUIRE(romanos_para_decimal("CDIV") == 404);
    REQUIRE(romanos_para_decimal("CDV") == 405);
    REQUIRE(romanos_para_decimal("CDVI") == 406);
    REQUIRE(romanos_para_decimal("CDVII") == 407);
    REQUIRE(romanos_para_decimal("CDVIII") == 408);
    REQUIRE(romanos_para_decimal("CDIX") == 409);
    REQUIRE(romanos_para_decimal("CDX") == 410);
    REQUIRE(romanos_para_decimal("CDXI") == 411);
    REQUIRE(romanos_para_decimal("CDXII") == 412);
    REQUIRE(romanos_para_decimal("CDXIII") == 413);
    REQUIRE(romanos_para_decimal("CDXIV") == 414);
    REQUIRE(romanos_para_decimal("CDXV") == 415);
    REQUIRE(romanos_para_decimal("CDXVI") == 416);
    REQUIRE(romanos_para_decimal("CDXVII") == 417);
    REQUIRE(romanos_para_decimal("CDXVIII") == 418);
    REQUIRE(romanos_para_decimal("CDXIX") == 419);
    REQUIRE(romanos_para_decimal("CDXX") == 420);
    // 900-920
    REQUIRE(romanos_para_decimal("CM") == 900);
    REQUIRE(romanos_para_decimal("CMI") == 901);
    REQUIRE(romanos_para_decimal("CMII") == 902);
    REQUIRE(romanos_para_decimal("CMIII") == 903);
    REQUIRE(romanos_para_decimal("CMIV") == 904);
    REQUIRE(romanos_para_decimal("CMV") == 905);
    REQUIRE(romanos_para_decimal("CMVI") == 906);
    REQUIRE(romanos_para_decimal("CMVII") == 907);
    REQUIRE(romanos_para_decimal("CMVIII") == 908);
    REQUIRE(romanos_para_decimal("CMIX") == 909);
    REQUIRE(romanos_para_decimal("CMX") == 910);
    REQUIRE(romanos_para_decimal("CMXI") == 911);
    REQUIRE(romanos_para_decimal("CMXII") == 912);
    REQUIRE(romanos_para_decimal("CMXIII") == 913);
    REQUIRE(romanos_para_decimal("CMXIV") == 914);
    REQUIRE(romanos_para_decimal("CMXV") == 915);
    REQUIRE(romanos_para_decimal("CMXVI") == 916);
    REQUIRE(romanos_para_decimal("CMXVII") == 917);
    REQUIRE(romanos_para_decimal("CMXVIII") == 918);
    REQUIRE(romanos_para_decimal("CMXIX") == 919);
    REQUIRE(romanos_para_decimal("CMXX") == 920);
    // 1000+
    REQUIRE(romanos_para_decimal("MC") ==  1100);
    REQUIRE(romanos_para_decimal("MCC") ==  1200);
    REQUIRE(romanos_para_decimal("MCCC") ==  1300);
    REQUIRE(romanos_para_decimal("MCD") ==  1400);
    REQUIRE(romanos_para_decimal("MD") ==  1500);
    REQUIRE(romanos_para_decimal("MDC") ==  1600);
    REQUIRE(romanos_para_decimal("MDCC") ==  1700);
    REQUIRE(romanos_para_decimal("MDCCC") ==  1800);
    REQUIRE(romanos_para_decimal("MCM") ==  1900);
    REQUIRE(romanos_para_decimal("MMC") ==  2100);
    REQUIRE(romanos_para_decimal("MMCC") ==  2200);
    REQUIRE(romanos_para_decimal("MMCCC") ==  2300);
    REQUIRE(romanos_para_decimal("MMCD") ==  2400);
    REQUIRE(romanos_para_decimal("MMD") ==  2500);
    REQUIRE(romanos_para_decimal("MMDC") ==  2600);
    REQUIRE(romanos_para_decimal("MMDCC") ==  2700);
    REQUIRE(romanos_para_decimal("MMDCCC") ==  2800);
    REQUIRE(romanos_para_decimal("MMCM") ==  2900);
}

TEST_CASE("Numeros romanos - combinações inválida: limite de caracteres consecutivos", "[romanos]") {
    REQUIRE(romanos_para_decimal("IIII") == -1);
    REQUIRE(romanos_para_decimal("VV") == -1);
    REQUIRE(romanos_para_decimal("XXXX") == -1);
    REQUIRE(romanos_para_decimal("LL") == -1);
    REQUIRE(romanos_para_decimal("CCCC") == -1);
    REQUIRE(romanos_para_decimal("DD") == -1);
}

TEST_CASE("Numeros romanos - combinações inválida: dois menores antes de um maior", "[romanos]") {
    REQUIRE(romanos_para_decimal("IIV") == -1);
    REQUIRE(romanos_para_decimal("IIX") == -1);
    REQUIRE(romanos_para_decimal("XXL") == -1);
    REQUIRE(romanos_para_decimal("XXC") == -1);
    REQUIRE(romanos_para_decimal("CCD") == -1);
    REQUIRE(romanos_para_decimal("CCM") == -1);
}