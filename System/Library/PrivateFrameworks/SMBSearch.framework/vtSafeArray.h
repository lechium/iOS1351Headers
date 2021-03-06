/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class safeArrayBound, NSArray;

@interface vtSafeArray : NSObject {

	unsigned short _cDims;
	unsigned short _fFeatures;
	unsigned _cbElementSize;
	safeArrayBound* _rgsBoundArr;
	NSArray* _vData;

}

@property (assign) unsigned short cDims;                      //@synthesize cDims=_cDims - In the implementation block
@property (assign) unsigned short fFeatures;                  //@synthesize fFeatures=_fFeatures - In the implementation block
@property (assign) unsigned cbElementSize;                    //@synthesize cbElementSize=_cbElementSize - In the implementation block
@property (retain) safeArrayBound * rgsBoundArr;              //@synthesize rgsBoundArr=_rgsBoundArr - In the implementation block
@property (retain) NSArray * vData;                           //@synthesize vData=_vData - In the implementation block
-(NSArray *)vData;
-(void)setVData:(NSArray *)arg1 ;
-(id)initWithArray:(id)arg1 ElementSize:(unsigned)arg2 ;
-(unsigned short)cDims;
-(void)setCDims:(unsigned short)arg1 ;
-(unsigned short)fFeatures;
-(void)setFFeatures:(unsigned short)arg1 ;
-(unsigned)cbElementSize;
-(void)setCbElementSize:(unsigned)arg1 ;
-(safeArrayBound *)rgsBoundArr;
-(void)setRgsBoundArr:(safeArrayBound *)arg1 ;
@end

