/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXMutablePointAnimator
@property (assign,nonatomic) CGPoint value; 
@property (nonatomic,readonly) PXNumberAnimator*<PXMutableNumberAnimator> xAnimator; 
@property (nonatomic,readonly) PXNumberAnimator*<PXMutableNumberAnimator> yAnimator; 
@required
-(CGPoint)value;
-(void)setValue:(CGPoint)arg1;
-(PXNumberAnimator*<PXMutableNumberAnimator>)xAnimator;
-(PXNumberAnimator*<PXMutableNumberAnimator>)yAnimator;

@end
