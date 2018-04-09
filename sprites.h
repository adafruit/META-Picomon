const uint8_t tiles[]={
  8,8,
  105, 0,
  0,
  0xFF,
  1,
  
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x7b,0x77,0x7b,0x7b,
  0xb7,0xb7,0xb7,0xbb,
  0x7b,0x7b,0x7b,0x7b,
  0xbb,0xb7,0x7b,0xb7,
  0x77,0xb7,0xb7,0xb7,
  0x7b,0x7b,0xbb,0x7b,
  0xb7,0xbb,0xb7,0xb7,
  0x77,0x7b,0x7b,0x7b,
  0x76,0x77,0x76,0x76,
  0x67,0x67,0x67,0x66,
  0x76,0x76,0x76,0x76,
  0x66,0x67,0x76,0x67,
  0x77,0x67,0x67,0x67,
  0x76,0x76,0x66,0x76,
  0x67,0x66,0x67,0x67,
  0x77,0x76,0x76,0x76,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x37,
  0x73,0x77,0x73,0xb3,
  0x3b,0x37,0x3b,0x37,
  0x3b,0x73,0x33,0x37,
  0x33,0x73,0x73,0xbb,
  0xb3,0x37,0x3b,0xb7,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0xd7,
  0x7d,0x77,0x7d,0x6d,
  0xd6,0xd7,0xd6,0xd7,
  0xd6,0x7d,0xdd,0xd7,
  0xdd,0x7d,0x7d,0x66,
  0x6d,0xd7,0xd6,0x67,
  0x77,0x76,0x77,0x77,
  0x77,0x76,0x77,0x77,
  0x76,0x77,0x67,0x67,
  0x76,0x77,0x67,0x67,
  0x77,0x76,0x77,0x76,
  0x77,0x76,0x76,0x76,
  0x76,0x77,0x76,0x77,
  0x76,0x77,0x77,0x77,
  0x76,0x77,0x76,0x76,
  0x67,0x77,0x77,0x66,
  0x77,0x7d,0xd7,0x76,
  0x67,0xdd,0x7d,0x76,
  0x67,0xd7,0x6d,0x77,
  0x76,0x7d,0xd7,0x76,
  0x67,0x67,0xdd,0x67,
  0x76,0x6d,0x76,0x76,
  0x74,0x77,0x74,0x77,
  0x47,0x77,0x47,0x74,
  0x77,0x77,0x77,0x77,
  0x47,0x47,0x77,0x47,
  0x77,0x77,0x77,0x77,
  0x77,0x74,0x47,0x74,
  0x77,0x77,0x77,0x77,
  0x77,0x74,0x77,0x74,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x67,0x67,0x77,
  0x76,0x76,0x77,0x77,
  0x67,0x77,0x67,0x77,
  0x77,0x77,0x76,0x76,
  0x67,0x77,0x77,0x67,
  0x76,0x77,0x77,0x76,
  0x77,0x67,0x77,0x67,
  0x77,0x76,0x76,0x77,
  0x44,0x44,0x44,0x44,
  0x44,0x44,0x44,0x44,
  0x66,0x66,0x66,0x66,
  0x44,0x44,0x44,0x44,
  0x44,0x44,0x44,0x44,
  0x44,0x44,0x44,0x44,
  0x66,0x66,0x66,0x66,
  0x44,0x44,0x44,0x44,
  0x46,0x44,0x46,0x44,
  0x46,0x44,0x46,0x44,
  0x46,0x44,0x46,0x44,
  0x46,0x44,0x46,0x44,
  0x46,0x44,0x46,0x44,
  0x46,0x44,0x46,0x44,
  0x46,0x44,0x46,0x44,
  0x46,0x44,0x46,0x44,
  0x66,0x66,0x66,0x66,
  0x22,0x22,0x22,0x22,
  0x22,0xdd,0x22,0xdd,
  0xdd,0x22,0xdd,0x22,
  0x22,0x22,0x22,0x22,
  0x22,0xdd,0x22,0xdd,
  0xdd,0x22,0xdd,0x22,
  0x66,0x66,0x66,0x66,
  0x77,0x77,0x77,0x07,
  0x77,0x77,0x70,0xd6,
  0x77,0x77,0x07,0xd6,
  0x77,0x70,0xd6,0xd0,
  0x77,0x07,0xd6,0x06,
  0x70,0xd6,0xd0,0x66,
  0x07,0xd6,0x06,0x66,
  0x70,0xd0,0x66,0x66,
  0x11,0x11,0x11,0x06,
  0x11,0x11,0x10,0x66,
  0x11,0x11,0x00,0x66,
  0x11,0x10,0x60,0x66,
  0x11,0x06,0x60,0x66,
  0x10,0x06,0x60,0x66,
  0x06,0x06,0x60,0x66,
  0x66,0x06,0x60,0x66,
  0x77,0x77,0x77,0x77,
  0x77,0x00,0x00,0x77,
  0x70,0x66,0x66,0x07,
  0x70,0x66,0x66,0x07,
  0x70,0x66,0x66,0x07,
  0x70,0x00,0x00,0x07,
  0x70,0x07,0x70,0x07,
  0x70,0x77,0x77,0x07,
  0x0d,0xdd,0xdd,0xd0,
  0x0d,0x67,0x67,0xd0,
  0x0d,0xdd,0xdd,0x00,
  0x0d,0xdd,0xd0,0x70,
  0x0d,0x66,0x66,0x00,
  0x0d,0xdd,0xdd,0xd0,
  0x00,0x00,0x00,0x00,
  0x06,0x66,0x66,0x60,
  0x11,0x11,0x11,0x11,
  0x1d,0xdd,0xdd,0xdd,
  0x1d,0xdd,0xdd,0xdd,
  0x1d,0xdc,0xcc,0xcc,
  0x1d,0xd7,0xcc,0xc7,
  0x1d,0xdc,0x7c,0x7c,
  0x1d,0xdc,0xc7,0xcc,
  0x1d,0xdc,0xcc,0xcc,
  0x11,0x11,0x11,0x11,
  0xdd,0xdd,0xdd,0xdd,
  0xdd,0xdd,0xdd,0xdd,
  0xcc,0xcc,0xcc,0xcc,
  0xcc,0xc7,0xcc,0xc7,
  0x7c,0x7c,0x7c,0x7c,
  0xc7,0xcc,0xc7,0xcc,
  0xcc,0xcc,0xcc,0xcc,
  0x11,0x11,0x11,0x11,
  0xdd,0xdd,0xdd,0xd1,
  0xdd,0xdd,0xdd,0xd1,
  0xcc,0xcc,0xcd,0xd1,
  0xcc,0xc7,0xcd,0xd1,
  0x7c,0x7c,0x7d,0xd1,
  0xc7,0xcc,0xcd,0xd1,
  0xcc,0xcc,0xcd,0xd1,
  0x1d,0xdc,0x7c,0xcc,
  0x1d,0xd7,0xc7,0xc7,
  0x1d,0xdc,0xcc,0x7c,
  0x1d,0xdc,0xcc,0xcc,
  0x1d,0xd7,0xcc,0xc7,
  0x1d,0xdc,0x7c,0x7c,
  0x1d,0xdc,0xc7,0xcc,
  0x1d,0xdc,0xcc,0xcc,
  0xcc,0xcc,0x7c,0xcc,
  0xc7,0xc7,0xc7,0xc7,
  0x7c,0x7c,0xcc,0x7c,
  0xcc,0xcc,0xcc,0xcc,
  0xcc,0xc7,0xcc,0xc7,
  0x7c,0x7c,0x7c,0x7c,
  0xc7,0xcc,0xc7,0xcc,
  0xcc,0xcc,0xcc,0xcc,
  0xcc,0xcc,0x7d,0xd1,
  0xc7,0xc7,0xcd,0xd1,
  0x7c,0x7c,0xcd,0xd1,
  0xcc,0xcc,0xcd,0xd1,
  0xcc,0xc7,0xcd,0xd1,
  0x7c,0x7c,0x7d,0xd1,
  0xc7,0xcc,0xcd,0xd1,
  0xcc,0xcc,0xcd,0xd1,
  0x1d,0xdc,0x7c,0xcc,
  0x1d,0xd7,0xc7,0xc7,
  0x1d,0xdc,0xcc,0x7c,
  0x1d,0xdc,0xcc,0xcc,
  0x1d,0xd7,0xcc,0xc7,
  0x1d,0xdd,0xdd,0xdd,
  0x1d,0xdd,0xdd,0xdd,
  0x11,0x11,0x11,0x11,
  0xcc,0xcc,0x7c,0xcc,
  0xc7,0xc7,0xc7,0xc7,
  0x7c,0x7c,0xcc,0x7c,
  0xcc,0xcc,0xcc,0xcc,
  0xcc,0xc7,0xcc,0xc7,
  0xdd,0xdd,0xdd,0xdd,
  0xdd,0xdd,0xdd,0xdd,
  0x11,0x11,0x11,0x11,
  0xcc,0xcc,0x7d,0xd1,
  0xc7,0xc7,0xcd,0xd1,
  0x7c,0x7c,0xcd,0xd1,
  0xcc,0xcc,0xcd,0xd1,
  0xcc,0xc7,0xcd,0xd1,
  0xdd,0xdd,0xdd,0xd1,
  0xdd,0xdd,0xdd,0xd1,
  0x11,0x11,0x11,0x11,
  0xc0,0x0c,0x00,0xcc,
  0xc0,0x07,0x00,0xc7,
  0x7c,0x7c,0xcc,0x7c,
  0xcc,0xcc,0xcc,0xcc,
  0xcc,0xc7,0xcc,0xc7,
  0x7c,0x7c,0x7c,0x7c,
  0xc7,0xcc,0xc7,0xcc,
  0xcc,0xcc,0xcc,0xcc,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x77,0x77,0x77,0x77,
  0x66,0x00,0x06,0x66,
  0x60,0x6d,0xd0,0x00,
  0x06,0xd6,0x7d,0x6d,
  0xdd,0x60,0x0d,0xd7,
  0x00,0x07,0xd0,0x00,
  0xdd,0x66,0x6d,0xdd,
  0x67,0x77,0x77,0x66,
  0x77,0x33,0x33,0x33,
  0x33,0x33,0x33,0x88,
  0x38,0x83,0x33,0x88,
  0x38,0x83,0x33,0x33,
  0x34,0x38,0x83,0x33,
  0x33,0x38,0x83,0x43,
  0x73,0x43,0x44,0x33,
  0x33,0x44,0x47,0x33,
  0x73,0x44,0x43,0x37,
  0x33,0x24,0x44,0x33,
  0x37,0x32,0x44,0x33,
  0x73,0x37,0x44,0x37,
  0x73,0x34,0x42,0x77,
  0x77,0x74,0x42,0x77,
  0x77,0x44,0x22,0x27,
  0x44,0x42,0x22,0x22,
  0x77,0x00,0x00,0x77,
  0x70,0x66,0x66,0x07,
  0x70,0x06,0x60,0x07,
  0x70,0xd0,0x0d,0x07,
  0x70,0x67,0x76,0x07,
  0x70,0xd7,0x7d,0x07,
  0x70,0xd7,0x7d,0x0d,
  0x76,0x00,0x00,0xd6,
  0x77,0x07,0x77,0x07,
  0x70,0x00,0x70,0x00,
  0x70,0x00,0x70,0x00,
  0x70,0xd0,0x70,0xd0,
  0x70,0x60,0x70,0x60,
  0x70,0x60,0x70,0x60,
  0x70,0x70,0x70,0x70,
  0x76,0x06,0x76,0x06,
  0x01,0x11,0x11,0x07,
  0x70,0x00,0x00,0x70,
  0x07,0x77,0x77,0x01,
  0x0d,0xd7,0xd7,0x01,
  0x07,0x77,0x77,0x01,
  0x07,0xdd,0x7d,0x01,
  0x70,0x00,0x00,0xd1,
  0x77,0x77,0x77,0xd0,
  0x77,0x77,0x77,0x70,
  0x70,0x00,0x00,0x00,
  0x07,0x07,0x07,0x00,
  0x00,0x00,0x00,0x00,
  0x07,0x07,0x07,0x00,
  0x00,0x00,0x00,0x00,
  0x07,0x07,0x07,0x00,
  0x70,0x00,0x00,0x00,
  0x77,0x00,0x00,0x77,
  0x70,0x88,0x88,0x07,
  0x08,0x78,0x88,0x80,
  0x08,0x88,0x88,0x80,
  0x07,0x88,0x88,0x70,
  0x07,0x77,0x77,0x70,
  0x70,0x77,0x77,0x07,
  0x77,0x00,0x00,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x70,0x07,0x77,
  0x07,0x07,0x80,0x70,
  0x80,0x78,0x88,0x08,
  0x80,0x88,0x88,0x08,
  0x07,0x08,0x80,0x70,
  0x77,0x70,0x07,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x66,0x66,0x67,
  0x76,0x66,0x66,0x66,
  0x76,0x66,0x66,0x66,
  0x66,0x66,0x6d,0xdd,
  0xd6,0x66,0xdd,0xdd,
  0xdd,0xdd,0xdd,0xd7,
  0x7d,0xdd,0xdd,0x77,
  0x77,0xdd,0xdd,0x77,
  0x7d,0xcc,0xcc,0xd7,
  0xdc,0xa7,0x7a,0xcd,
  0x77,0x7c,0xc7,0x77,
  0xdc,0xa7,0x7a,0xcd,
  0x7d,0xcc,0xcc,0xd7,
  0x77,0xdc,0xcd,0x77,
  0x77,0x1c,0xc1,0x77,
  0x71,0x6c,0xc6,0x17,
  0x16,0x6c,0xc6,0x61,
  0x11,0x66,0x66,0x11,
  0x16,0x11,0x11,0xd1,
  0x16,0x66,0xdd,0xd1,
  0x16,0x66,0xdd,0xd1,
  0x71,0x66,0xdd,0x17,
  0x77,0x11,0x11,0x77,
  0x0d,0x77,0x77,0xd0,
  0x00,0x00,0x00,0x00,
  0x0d,0x77,0x77,0xd0,
  0x00,0x00,0x00,0x00,
  0x0d,0x77,0x77,0xd0,
  0x00,0x00,0x00,0x00,
  0x0d,0x77,0x77,0xd0,
  0x00,0x00,0x00,0x00,
  0x66,0x66,0x66,0x66,
  0x66,0x66,0x66,0x66,
  0xdd,0xdd,0xdd,0xdd,
  0x66,0x66,0x66,0x66,
  0x66,0x66,0x66,0x66,
  0x66,0x66,0x66,0x66,
  0xdd,0xdd,0xdd,0xdd,
  0x66,0x66,0x66,0x66,
  0x77,0x77,0x00,0x00,
  0x77,0x70,0x7d,0x66,
  0x77,0x0d,0x7d,0xdd,
  0x70,0x7d,0x7d,0x66,
  0x0d,0x7d,0x7d,0x00,
  0x0d,0x7d,0x70,0x66,
  0x0d,0x7d,0x06,0x60,
  0x0d,0x70,0x66,0x07,
  0x00,0x06,0x67,0x07,
  0x77,0x06,0x77,0x06,
  0x77,0x06,0x77,0xd0,
  0x77,0x06,0x61,0x11,
  0x77,0x07,0xdd,0xdd,
  0x77,0x07,0xdd,0xdd,
  0x60,0x00,0x00,0x00,
  0x66,0x06,0x66,0x66,
  0x66,0x07,0x77,0x77,
  0x66,0x07,0x76,0x66,
  0x66,0x07,0x77,0x77,
  0x66,0x07,0x77,0x77,
  0x66,0x06,0x66,0x66,
  0x66,0x07,0x76,0x66,
  0x66,0x60,0x00,0x00,
  0x66,0x66,0x66,0x66,
  0x00,0x00,0x00,0x00,
  0x66,0x66,0x66,0x66,
  0xdd,0xdd,0xdd,0xdd,
  0x66,0x66,0x66,0x66,
  0x00,0x00,0x00,0x00,
  0x66,0x66,0x66,0x66,
  0x00,0x07,0x77,0x77,
  0x76,0x70,0x77,0x77,
  0x67,0xd0,0x77,0x77,
  0x7d,0xd0,0x77,0x77,
  0x00,0x0d,0x77,0x77,
  0x11,0x11,0x11,0x11,
  0xdd,0xdd,0xdd,0xdd,
  0xdd,0xdd,0xdd,0xdd,
  0x00,0x00,0x00,0x00,
  0x06,0x66,0x66,0x60,
  0x0d,0xdd,0xdd,0xd0,
  0x0d,0x67,0x67,0xd0,
  0x0d,0xdd,0xdd,0x00,
  0x0d,0xdd,0xd0,0x70,
  0x0d,0x66,0x66,0x00,
  0x0d,0xdd,0xdd,0xd0,
  0x00,0x00,0x00,0x00,
  0x06,0x66,0x66,0x60,
  0x00,0x00,0x00,0x00,
  0x66,0x66,0x66,0x66,
  0xdd,0xdd,0xdd,0xdd,
  0x66,0x66,0x66,0x66,
  0x00,0x00,0x00,0x00,
  0x66,0x66,0x66,0x66,
  0xd0,0x00,0x0d,0xd0,
  0x07,0x76,0x70,0x07,
  0x07,0x67,0xd0,0x07,
  0x06,0x7d,0xd0,0x06,
  0xd0,0x00,0x0d,0xd0,
  0x11,0x11,0x11,0x11,
  0xdd,0xdd,0xdd,0xdd,
  0xdd,0xdd,0xdd,0xdd,
  0x00,0x00,0x00,0x00,
  0x66,0x66,0x66,0x66,
  0xd0,0x00,0x0d,0xd0,
  0x07,0x76,0x70,0x07,
  0x07,0x67,0xd0,0x07,
  0x06,0x7d,0xd0,0x06,
  0xd0,0x00,0x0d,0xd0,
  0x66,0x66,0x66,0x66,
  0x00,0x00,0x00,0x00,
  0x66,0x66,0x66,0x66,
  0x00,0x00,0x77,0x77,
  0x66,0xd7,0x07,0x77,
  0xdd,0xd7,0xd0,0x77,
  0x66,0xd7,0xd7,0x07,
  0x00,0xd7,0xd7,0xd0,
  0x66,0x07,0xd7,0xd0,
  0x00,0x00,0xd7,0xd0,
  0x76,0x70,0x07,0xd0,
  0x67,0xd0,0x60,0x00,
  0x7d,0xd0,0x60,0x77,
  0x00,0x0d,0x60,0x77,
  0x11,0x16,0x60,0x77,
  0xdd,0xdd,0x70,0x77,
  0xdd,0xdd,0x70,0x77,
  0x00,0x00,0x00,0x07,
  0x66,0x66,0x60,0x77,
  0x00,0x0d,0x70,0x77,
  0x76,0x70,0x70,0x66,
  0x67,0xd0,0x70,0x66,
  0x7d,0xd0,0x70,0x66,
  0x00,0x0d,0x70,0x66,
  0x66,0x67,0x70,0x66,
  0x00,0x00,0x06,0x66,
  0x66,0x66,0x66,0x66,
  0x67,0xd0,0x77,0x77,
  0x7d,0xd0,0x77,0x77,
  0x00,0x0d,0x77,0x77,
  0x11,0x11,0x11,0x11,
  0xdd,0xdd,0xdd,0xdd,
  0xdd,0xdd,0xdd,0xdd,
  0x00,0x00,0x00,0x00,
  0x66,0x66,0x66,0x66,
  0x77,0xd0,0x00,0x0d,
  0x66,0x07,0x76,0x70,
  0x77,0x07,0x67,0xd0,
  0x77,0x06,0x7d,0xd0,
  0x66,0xd0,0x00,0x0d,
  0x66,0x66,0x66,0x66,
  0x00,0x00,0x00,0x00,
  0x66,0x66,0x66,0x66,
  0x66,0x66,0x66,0x66,
  0x66,0x66,0x66,0x66,
  0xdd,0xdd,0xdd,0xdd,
  0x60,0x00,0x00,0x00,
  0x07,0x77,0x77,0x77,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x00,0x00,0x00,0x00,
  0x00,0xdd,0xdd,0xdd,
  0x00,0x00,0x00,0x00,
  0x00,0x77,0x77,0x77,
  0x66,0x66,0x66,0x66,
  0x66,0x66,0x66,0x66,
  0xdd,0xdd,0xdd,0xdd,
  0x00,0x00,0x00,0x06,
  0x77,0x77,0x77,0x70,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0x00,0x00,0x00,0x00,
  0xdd,0xdd,0xdd,0x00,
  0x00,0x00,0x00,0x00,
  0x77,0x77,0x77,0x00,
  0x70,0x00,0x00,0x00,
  0x07,0x77,0x77,0x77,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x07,0xdd,0xdd,0xdd,
  0x00,0x00,0x00,0x00,
  0x00,0xdd,0xdd,0xdd,
  0x00,0x00,0x00,0x00,
  0x00,0x77,0x77,0x77,
  0x00,0x00,0x00,0x07,
  0x77,0x77,0x77,0x70,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0xdd,0xdd,0xdd,0xd0,
  0x00,0x00,0x00,0x00,
  0xdd,0xdd,0xdd,0x00,
  0x00,0x00,0x00,0x00,
  0x77,0x77,0x77,0x00,
  0x77,0x00,0x00,0x77,
  0x70,0x11,0x11,0x07,
  0x00,0x00,0x00,0x00,
  0x0d,0x7d,0xdd,0xd0,
  0x07,0xdd,0xdd,0xd0,
  0x0d,0xdd,0xdd,0xd0,
  0x0d,0xdd,0xdd,0xd0,
  0x00,0x00,0x00,0x00,
  0x04,0x56,0x32,0xd0,
  0x00,0x61,0x66,0x00,
  0x0d,0x00,0x00,0xd0,
  0x0d,0xdd,0xdd,0xd0,
  0x00,0x00,0x00,0x00,
  0x0d,0xd0,0x0d,0xd0,
  0x0d,0xd0,0x0d,0xd0,
  0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,
  0x07,0x77,0x77,0x70,
  0x07,0xdd,0xdd,0xd0,
  0x07,0xdd,0xdd,0xd0,
  0x00,0x00,0x00,0x00,
  0x06,0x66,0x66,0x60,
  0x06,0x66,0x66,0x60,
  0x00,0x00,0x00,0x00,
  0x06,0x66,0x66,0x60,
  0x06,0x66,0x66,0x60,
  0x00,0x00,0x00,0x00,
  0x0d,0xdd,0xdd,0xd0,
  0x0d,0x00,0x00,0xd0,
  0x0d,0xd0,0x0d,0xd0,
  0x0d,0xd0,0x0d,0xd0,
  0x00,0x00,0x00,0x00,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x70,0x77,0x70,0x77,
  0x06,0x07,0x70,0x07,
  0x70,0x60,0x00,0x60,
  0x00,0x06,0x06,0x07,
  0x06,0x00,0x60,0x60,
  0x70,0x60,0x06,0x07,
  0x00,0x60,0x70,0x77,
  0x77,0x07,0x07,0x77,
  0x77,0x70,0x07,0x77,
  0x70,0x00,0x00,0x07,
  0x00,0x00,0x00,0x00,
  0x0d,0x00,0x00,0xd0,
  0x70,0xdd,0xdd,0x07,
  0x77,0x00,0x00,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x00,0x00,0x77,
  0x70,0x77,0x77,0x07,
  0x77,0x70,0x07,0x77,
  0x77,0x00,0x00,0x77,
  0x7d,0xdd,0xdd,0xd7,
  0x70,0x77,0x77,0x07,
  0x00,0x00,0x00,0x00,
  0x0d,0xdd,0xdd,0xd0,
  0x00,0x00,0x00,0x00,
  0x00,0x66,0x66,0x00,
  0x06,0x77,0x77,0x60,
  0x07,0x77,0x77,0x70,
  0x07,0x77,0x77,0x70,
  0x07,0x77,0x77,0x70,
  0x07,0x77,0x77,0x70,
  0x07,0x77,0x77,0x70,
  0x07,0x77,0x77,0x70,
  0x07,0x77,0x77,0x70,
  0x06,0x77,0x77,0x60,
  0x00,0x00,0x00,0x00,
  0x01,0x11,0x11,0x10,
  0x06,0x66,0x66,0x60,
  0x77,0x77,0x77,0x77,
  0x70,0x00,0x77,0x77,
  0x01,0x11,0x07,0x77,
  0x07,0x77,0x07,0x77,
  0x0d,0x76,0x07,0x07,
  0x70,0x00,0x70,0xd0,
  0x77,0x77,0x0d,0x60,
  0x77,0x77,0x70,0x07,
  0x77,0x66,0xff,0x77,
  0x76,0x66,0x6f,0xf7,
  0x7f,0xff,0x66,0x67,
  0x7f,0x0f,0xff,0x67,
  0x7f,0xff,0xff,0xf7,
  0x77,0x6f,0xff,0x77,
  0x77,0x55,0x55,0x77,
  0x77,0x37,0x73,0x77,
  0x77,0xee,0xee,0x77,
  0x7e,0xee,0xee,0xe7,
  0x7f,0xfe,0xee,0xe7,
  0x7f,0x0f,0xee,0xe7,
  0x7f,0xfe,0xef,0xf7,
  0x77,0xff,0xff,0x77,
  0x77,0x55,0x55,0x77,
  0x77,0x37,0x73,0x77,
  0x77,0xbb,0xbb,0x77,
  0x7b,0xbb,0xbb,0xb7,
  0x7b,0xbb,0xff,0xf7,
  0x7b,0xff,0xf0,0xf7,
  0x7f,0xff,0xff,0xf7,
  0x77,0xff,0xf6,0x77,
  0x77,0x55,0x55,0x77,
  0x77,0x37,0x73,0x77,
  0x77,0x88,0x88,0x87,
  0x78,0x88,0x88,0x88,
  0x7f,0xff,0x88,0x88,
  0x7f,0x0f,0xf8,0x88,
  0x7f,0xff,0xf8,0x88,
  0x77,0xff,0xff,0x88,
  0x77,0x55,0x55,0x77,
  0x77,0x37,0x73,0x77,
  0x79,0x99,0x99,0x77,
  0x75,0x55,0x55,0x57,
  0x79,0x99,0xff,0xf7,
  0x79,0x9f,0xf0,0xf7,
  0x79,0x9f,0xff,0xf7,
  0x77,0xff,0xff,0x77,
  0x77,0x55,0x55,0x77,
  0x77,0x37,0x73,0x77,
  0x77,0x00,0x00,0x07,
  0x70,0x00,0x00,0x07,
  0x7f,0xf3,0x33,0x37,
  0x7f,0x0f,0x33,0x37,
  0x7f,0xff,0xf3,0x37,
  0x77,0xff,0xff,0x77,
  0x77,0x55,0x55,0x77,
  0x77,0x37,0x73,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0xee,0xe7,
  0x77,0x7e,0xee,0xee,
  0xe7,0x70,0xee,0xe0,
  0x7e,0xee,0x8e,0x8e,
  0x7e,0xee,0xff,0xfe,
  0x7e,0xee,0xee,0xe7,
  0x7e,0x7e,0x77,0xe7,
  0x77,0x77,0x79,0x77,
  0x77,0x77,0x79,0x77,
  0x77,0x00,0x09,0x99,
  0x70,0x07,0x00,0x77,
  0x70,0x70,0x70,0x77,
  0x70,0x07,0x00,0x77,
  0x80,0x00,0x08,0x87,
  0x88,0x77,0x78,0x87,
  0x77,0x77,0x77,0x77,
  0x77,0x73,0x73,0x77,
  0x77,0x73,0x33,0x77,
  0x37,0x30,0x30,0x37,
  0x37,0x33,0x33,0x37,
  0x33,0x63,0x33,0x67,
  0x33,0x36,0x66,0x77,
  0x37,0x37,0x37,0x77,
  0xa7,0x78,0x88,0x87,
  0x9a,0x78,0x70,0x87,
  0x9a,0x78,0x88,0x88,
  0x87,0x99,0x88,0x66,
  0x87,0x99,0x88,0x88,
  0x87,0x99,0x88,0x87,
  0x78,0x88,0x88,0x87,
  0x77,0x88,0x78,0x87,
  0x77,0x7c,0xcc,0x77,
  0x77,0xdd,0xcd,0xd7,
  0x77,0xc8,0xd8,0xc7,
  0x77,0xcc,0xcc,0xc7,
  0x75,0x7c,0xdc,0x75,
  0x7d,0x55,0xc5,0x5d,
  0x75,0xdc,0xcc,0xd5,
  0x7d,0xcc,0xcc,0xcd,
  0x77,0x77,0x77,0x77,
  0x77,0x7b,0xbb,0x77,
  0x77,0x7b,0xbb,0x3b,
  0x77,0x3b,0xbb,0x3b,
  0x3b,0xb3,0x73,0xbb,
  0xb3,0xb7,0xbb,0xbb,
  0xbb,0x77,0x0b,0x07,
  0x77,0x77,0x7b,0x77,
  0x79,0x97,0x79,0x97,
  0x98,0x98,0x89,0x89,
  0x90,0x05,0x50,0x09,
  0x90,0x08,0x80,0x09,
  0x59,0x95,0x59,0x95,
  0x77,0x58,0x85,0x77,
  0x55,0x95,0x59,0x55,
  0x59,0x98,0x89,0x95,
  0x77,0x77,0x22,0x77,
  0x77,0x77,0x26,0x27,
  0x77,0x72,0x22,0x99,
  0x77,0x22,0x22,0x77,
  0x72,0x22,0x27,0x77,
  0x22,0x22,0x77,0x77,
  0x77,0x57,0x77,0x77,
  0x77,0x5b,0x77,0x77,
  0x0f,0xf7,0x7f,0xf0,
  0xff,0xff,0xff,0xff,
  0xff,0x1f,0xf1,0xff,
  0x7f,0xff,0xff,0xf7,
  0x7f,0xf8,0x8f,0xf7,
  0xff,0xff,0xff,0xff,
  0x7e,0xff,0xff,0x77,
  0x77,0xf7,0x7f,0x77,
  0x7e,0xee,0xee,0xe7,
  0xee,0x7e,0xe7,0xee,
  0xe7,0x1e,0xe7,0x1e,
  0xfe,0xee,0xee,0xef,
  0xee,0xee,0xee,0xee,
  0xee,0xee,0xe5,0xee,
  0x7e,0xee,0xee,0xe7,
  0x7e,0xe7,0x7e,0xe7,
  0x73,0x73,0x37,0x37,
  0x37,0x37,0x73,0x73,
  0x77,0x73,0x37,0x77,
  0x77,0xd3,0x3d,0x77,
  0x7d,0x9d,0xd9,0xd7,
  0x77,0xdd,0xdd,0x77,
  0x77,0xdd,0xdd,0x77,
  0x77,0x7d,0xd7,0x77,
  0x77,0x88,0x88,0x77,
  0x78,0x88,0x87,0x87,
  0x78,0x78,0x88,0x87,
  0x88,0x88,0x87,0x88,
  0x76,0x6d,0xd6,0x67,
  0x70,0x6d,0xd6,0x07,
  0x77,0xdd,0xdd,0x77,
  0x77,0xd7,0x7d,0x77,
  0xd7,0x77,0x77,0x7d,
  0x7d,0x71,0x17,0xd7,
  0x77,0x11,0x11,0x77,
  0x71,0x81,0x18,0x17,
  0x71,0x11,0x11,0x17,
  0x77,0x11,0x11,0x77,
  0x7d,0x71,0x17,0xd7,
  0xd7,0x77,0x77,0x7d,
  0x05,0x07,0x70,0x50,
  0x59,0x57,0x75,0x95,
  0x75,0x77,0x77,0x57,
  0x77,0x57,0x75,0x77,
  0x77,0x75,0x57,0x77,
  0x37,0x55,0x55,0x73,
  0x75,0x55,0x55,0x57,
  0x77,0x57,0x75,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x79,0x97,0x77,
  0x67,0x88,0x88,0x77,
  0x68,0x88,0x80,0x88,
  0x68,0x88,0x86,0x67,
  0x67,0x66,0x66,0x77,
  0x77,0x78,0x87,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0xcc,0xcc,0x97,
  0x7c,0xc6,0x9c,0x5c,
  0x7c,0xc6,0x75,0xcc,
  0x7c,0xcc,0x67,0xc8,
  0x77,0x7c,0xc6,0x77,
  0x77,0xcc,0xc6,0x77,
  0x7c,0xc6,0x67,0x77,
  0xcc,0x67,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x55,0x57,0x77,
  0x75,0x55,0x55,0x77,
  0x55,0x55,0x55,0x57,
  0x55,0x05,0x50,0x55,
  0x55,0x55,0x55,0x55,
  0xbb,0x77,0x77,0xbb,
  0xbb,0xbb,0x7b,0xbb,
  0x7b,0xbb,0xbb,0xb7,
  0x77,0xb1,0xb1,0x77,
  0x77,0xb3,0xb3,0x77,
  0x7b,0xbb,0xbb,0xb7,
  0xbb,0xbb,0x7b,0xbb,
  0xbb,0xb7,0x77,0xbb,
  0x77,0x77,0x70,0x00,
  0x77,0x00,0x00,0x00,
  0x70,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,
  0x00,0x00,0x00,0x07,
  0x00,0x00,0x00,0x07,
  0x07,0x70,0x77,0x07,
  0x07,0x70,0x77,0x07,
  0x97,0x77,0x97,0x79,
  0x99,0x99,0x99,0x99,
  0x70,0x79,0x97,0x07,
  0x77,0x79,0x97,0x77,
  0x99,0x99,0x99,0x99,
  0x79,0x11,0x11,0x97,
  0x99,0x19,0x91,0x99,
  0x97,0x79,0x97,0x79,
  0x77,0x7f,0xf7,0x77,
  0x77,0xff,0xff,0x77,
  0x7f,0xff,0xfe,0xf7,
  0xff,0xfe,0xef,0xff,
  0xff,0xef,0xfe,0xff,
  0xfe,0xff,0xfe,0xff,
  0xff,0xff,0xef,0xef,
  0x7f,0xff,0xff,0xf7,
  0x77,0xc7,0x7c,0xc7,
  0xc7,0x7c,0xc7,0x7c,
  0x7c,0xc7,0x7c,0x7c,
  0x77,0x7c,0x7c,0x77,
  0xcc,0x7c,0x77,0xc7,
  0x77,0xc7,0xc7,0x7c,
  0x77,0xc7,0x7c,0x77,
  0x77,0x7c,0x77,0xc7,
  0x7a,0xa7,0x7a,0xa7,
  0x7a,0xa7,0x7a,0xa7,
  0xa9,0x9a,0xa9,0x9a,
  0x99,0x99,0x99,0x99,
  0x98,0x89,0x98,0x89,
  0x88,0x88,0x88,0x88,
  0x88,0x88,0x88,0x88,
  0x78,0x87,0x78,0x87,
  0x77,0x77,0x77,0x77,
  0x77,0x64,0x47,0x77,
  0x76,0x64,0x44,0x77,
  0x66,0x64,0x44,0x47,
  0x66,0x6d,0x55,0x57,
  0x44,0x45,0x55,0x57,
  0x74,0x45,0x55,0x77,
  0x77,0x45,0x57,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0xc7,0x77,
  0x77,0x7c,0xc7,0x77,
  0x77,0xcc,0xcc,0x77,
  0x7c,0xcc,0xcc,0xc7,
  0x7c,0xcc,0xcc,0xc7,
  0x77,0xcc,0xcc,0x77
};
Image tile_set(tiles);

const uint8_t player_sprites[]={
  8,8,
  12, 0,
  0,
  0xFF,
  1,
  
  0x77,0x78,0x88,0x87,
  0x77,0x88,0x88,0x88,
  0x88,0x8f,0x88,0x66,
  0x77,0xff,0xff,0xff,
  0x72,0xff,0xff,0x0f,
  0x7d,0xdf,0xff,0xfe,
  0x77,0x55,0x55,0x57,
  0x77,0x77,0x33,0x77,
  0x77,0x78,0x88,0x87,
  0x77,0x88,0x88,0x88,
  0x88,0x8f,0x88,0x66,
  0x77,0xff,0xff,0xff,
  0x72,0xff,0xff,0x0f,
  0x7d,0xdf,0xff,0xfe,
  0x77,0x55,0x55,0x53,
  0x77,0x33,0x77,0x33,
  0x77,0x88,0x88,0x77,
  0x78,0x88,0x88,0x87,
  0xf8,0x88,0x88,0x8f,
  0xff,0x88,0x88,0xff,
  0x7f,0xf2,0x2f,0xf7,
  0x75,0x2d,0xd2,0x5f,
  0xf7,0x52,0x25,0x77,
  0x77,0x77,0x33,0x77,
  0x77,0x88,0x88,0x77,
  0x78,0x88,0x88,0x87,
  0xf8,0x88,0x88,0x8f,
  0xff,0x88,0x88,0xff,
  0x7f,0xf2,0x2f,0xf7,
  0xf5,0x2d,0xd2,0x57,
  0x77,0x52,0x25,0x7f,
  0x77,0x33,0x77,0x77,
  0x78,0x88,0x87,0x77,
  0x88,0x88,0x88,0x77,
  0x66,0x88,0xf8,0x88,
  0xff,0xff,0xff,0x77,
  0xf0,0xff,0xff,0x27,
  0xef,0xff,0xfd,0xd7,
  0x75,0x55,0x55,0x77,
  0x77,0x33,0x77,0x77,
  0x78,0x88,0x87,0x77,
  0x88,0x88,0x88,0x77,
  0x66,0x88,0xf8,0x88,
  0xff,0xff,0xff,0x77,
  0xf0,0xff,0xff,0x27,
  0xef,0xff,0xfd,0xd7,
  0x35,0x55,0x55,0x77,
  0x33,0x77,0x33,0x77,
  0x77,0x88,0x88,0x77,
  0x78,0x88,0x88,0x87,
  0xf8,0x86,0x68,0x8f,
  0xff,0xff,0xff,0xff,
  0x7f,0x0f,0xf0,0xf7,
  0x75,0xff,0xff,0x5e,
  0xe7,0x55,0x55,0x77,
  0x77,0x77,0x33,0x77,
  0x77,0x88,0x88,0x77,
  0x78,0x88,0x88,0x87,
  0xf8,0x86,0x68,0x8f,
  0xff,0xff,0xff,0xff,
  0x7f,0x0f,0xf0,0xf7,
  0xe5,0xff,0xff,0x57,
  0x77,0x55,0x55,0x7e,
  0x77,0x33,0x77,0x77,
  0x77,0x78,0x88,0x87,
  0x77,0x88,0x88,0x88,
  0x88,0x8f,0x88,0x66,
  0x77,0xff,0xff,0xff,
  0x72,0xff,0xff,0x0f,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x88,0x88,0x77,
  0x78,0x88,0x88,0x87,
  0xf8,0x88,0x88,0x8f,
  0xff,0x88,0x88,0xff,
  0x7f,0xf2,0x2f,0xf7,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x78,0x88,0x87,0x77,
  0x88,0x88,0x88,0x77,
  0x66,0x88,0xf8,0x88,
  0xff,0xff,0xff,0x77,
  0xf0,0xff,0xff,0x27,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x88,0x88,0x77,
  0x78,0x88,0x88,0x87,
  0xf8,0x86,0x68,0x8f,
  0xff,0xff,0xff,0xff,
  0x7f,0x0f,0xf0,0xf7,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77,
  0x77,0x77,0x77,0x77
};
Image player_sprite_set(player_sprites);
