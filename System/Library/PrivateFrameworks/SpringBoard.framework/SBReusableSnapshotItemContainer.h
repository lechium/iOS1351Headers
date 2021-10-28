/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBFluidSwitcherItemContainer.h>
#import <libobjc.A.dylib/SBReusableView.h>

@class SBAppLayout, NSString;

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBReusableView> {

	SBAppLayout* _snapshotAppLayout;

}

@property (nonatomic,retain) SBAppLayout * snapshotAppLayout;              //@synthesize snapshotAppLayout=_snapshotAppLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(void)setContentView:(id)arg1 ;
-(id)_snapshotView;
-(void)setSnapshotAppLayout:(SBAppLayout *)arg1 ;
-(SBAppLayout *)snapshotAppLayout;
@end
