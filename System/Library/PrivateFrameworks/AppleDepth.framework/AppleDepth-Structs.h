/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct __CVBuffer* CVBufferRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	void data;
	void reserved;
	unsigned long long dim[4];
	unsigned long long stride[4];
	unsigned long long width;
	unsigned long long height;
	unsigned long long channels;
	unsigned long long batch_number;
	unsigned long long sequence_length;
	unsigned long long stride_width;
	unsigned long long stride_height;
	unsigned long long stride_channels;
	unsigned long long stride_batch_number;
	unsigned long long stride_sequence_length;
	int storage_type;
} SCD_Struct_Es3;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_AD4;

typedef struct {
	[4 columns];
} SCD_Struct_AD5;

typedef struct {
	id field1;
	SCD_Struct_AD5 field2;
	double field3;
} SCD_Struct_AD6;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _compressed_pair<unsigned char *, std::__1::default_delete<unsigned char []> > {
	char* __value_;
} compressed_pair<unsigned char *, std::__1::default_delete<unsigned char []> >;

typedef struct unique_ptr<unsigned char [], std::__1::default_delete<unsigned char []> > {
	compressed_pair<unsigned char *, std::__1::default_delete<unsigned char []> > __ptr_;
} unique_ptr<unsigned char [], std::__1::default_delete<unsigned char []> >;

typedef struct JasperPointCloud {
	unique_ptr<unsigned char [], std::__1::default_delete<unsigned char []> > m_ownedStorage;
	JasperPointCloudDataHeader m_header;
	unsigned long long m_capacity;
} JasperPointCloud;

typedef struct {
	[3 columns];
} SCD_Struct_AD12;

typedef struct ADDistortionPolynomials {
	float forwardOrders[8];
	float inverseOrders[8];
} ADDistortionPolynomials;

typedef struct _compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > {
	 __value_;
} compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >;

typedef struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > {
	 __begin_;
	 __end_;
	compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > __end_cap_;
} vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >;

