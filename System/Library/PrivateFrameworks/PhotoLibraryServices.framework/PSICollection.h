/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSIObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PSIDate, NSString, PSIAsset, NSDate;

@interface PSICollection : PSIObject <NSCopying> {

	PSIDate* _startDate;
	PSIDate* _endDate;
	NSString* _title;
	NSString* _subtitle;
	PSIAsset* _keyAsset;
	unsigned long long _type;
	unsigned long long _numberOfAssets;
	NSDate* _sortDate;

}

@property (readonly) PSIDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (readonly) PSIDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) PSIAsset * keyAsset;                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (readonly) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long numberOfAssets;              //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (readonly) NSDate * sortDate;                              //@synthesize sortDate=_sortDate - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(PSIDate *)startDate;
-(PSIDate *)endDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSDate *)sortDate;
-(unsigned long long)numberOfAssets;
-(PSIAsset *)keyAsset;
-(void)setKeyAsset:(PSIAsset *)arg1 ;
-(id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAsset:(id)arg6 type:(unsigned long long)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9 ;
-(id)_initForCopy:(BOOL)arg1 ;
@end

