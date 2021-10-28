/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PXErrorRecoveryAttempter : NSObject {

	NSArray* _recoveryOptions;
	long long _preferredRecoveryOptionIndex;

}

@property (nonatomic,copy) NSArray * recoveryOptions;                             //@synthesize recoveryOptions=_recoveryOptions - In the implementation block
@property (assign,nonatomic) long long preferredRecoveryOptionIndex;              //@synthesize preferredRecoveryOptionIndex=_preferredRecoveryOptionIndex - In the implementation block
-(id)init;
-(long long)alertActionStyleForRecoveryOptionAtIndex:(unsigned long long)arg1 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(NSArray *)recoveryOptions;
-(void)setRecoveryOptions:(NSArray *)arg1 ;
-(long long)preferredRecoveryOptionIndex;
-(void)setPreferredRecoveryOptionIndex:(long long)arg1 ;
@end
