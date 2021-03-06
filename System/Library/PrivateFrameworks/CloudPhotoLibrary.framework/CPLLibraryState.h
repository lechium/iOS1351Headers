/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface CPLLibraryState : NSObject {

	BOOL _disabled;
	NSDate* _disabledDate;
	NSDate* _deleteDate;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) NSDate * disabledDate;                          //@synthesize disabledDate=_disabledDate - In the implementation block
@property (nonatomic,copy) NSDate * deleteDate;                            //@synthesize deleteDate=_deleteDate - In the implementation block
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSDate *)disabledDate;
-(void)setDisabledDate:(NSDate *)arg1 ;
-(NSDate *)deleteDate;
-(void)setDeleteDate:(NSDate *)arg1 ;
@end

