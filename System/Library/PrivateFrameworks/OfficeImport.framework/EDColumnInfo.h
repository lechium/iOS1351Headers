/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDKeyedObject.h>

@class EDResources, EDWorksheet, EDReference, NSString;

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {

	EDResources* mResources;
	EDWorksheet* mWorksheet;
	int mWidth;
	BOOL mHidden;
	EDReference* mRange;
	unsigned long long mStyleIndex;
	unsigned char mOutlineLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)columnInfoWithResources:(id)arg1 worksheet:(id)arg2 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)key;
-(id)range;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(BOOL)isHidden;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setRange:(id)arg1 ;
-(void)setStyleIndex:(unsigned long long)arg1 ;
-(unsigned long long)styleIndex;
-(id)initWithResources:(id)arg1 worksheet:(id)arg2 ;
-(int)widthInXlUnits;
-(void)setWidthInXlUnits:(int)arg1 ;
-(void)setRangeWithFirstColumn:(int)arg1 lastColumn:(int)arg2 ;
-(unsigned char)outlineLevel;
-(void)setOutlineLevel:(unsigned char)arg1 ;
@end

