/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITapRecognizerDelegate <NSObject>
@optional
-(void)resetTapCountForTapRecognizer:(id)arg1;

@required
-(double)_touchSloppinessFactor;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
-(void)tapRecognizerRecognizedTap:(id)arg1;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1;

@end

