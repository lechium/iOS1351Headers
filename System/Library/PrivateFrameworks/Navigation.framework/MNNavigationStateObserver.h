/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNNavigationStateObserver <NSObject>
@optional
-(void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)stateManager:(id)arg1 didUpdatePossibleDestinations:(id)arg2;
-(void)stateManagerPredictingDidArrive:(id)arg1;

@end

