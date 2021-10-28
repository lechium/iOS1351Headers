/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UICAPackageView.h>

@class NSURL, NSString;

@interface _WGCAPackageView : _UICAPackageView {

	NSURL* _archiveURL;

}

@property (nonatomic,copy) NSURL * archiveURL;                                  //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapshotIdentifier; 
+(void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)description;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(NSURL *)archiveURL;
-(void)setArchiveURL:(NSURL *)arg1 ;
-(BOOL)_supportsPushingBottomCornerRadiusToSubviews:(double)arg1 ;
-(NSString *)snapshotIdentifier;
@end
