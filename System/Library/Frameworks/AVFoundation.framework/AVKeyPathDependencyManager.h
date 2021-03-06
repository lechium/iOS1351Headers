/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVKeyPathDependencyRegistration.h>

@class AVWeakReference, AVWeakObservableCallbackCancellationHelper, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration> {

	AVWeakReference* _weakReferenceToDependencyHost;
	AVWeakObservableCallbackCancellationHelper* _callbackCancellationHelper;
	NSMutableSet* _keyPathDependencies;

}
-(void)dealloc;
-(id)initWithDependencyHost:(id)arg1 ;
-(void)dependencyHostIsFullyInitialized;
-(void)addCallbackToCancel:(id)arg1 ;
-(void)cancelAllCallbacks;
-(void)valueForKey:(id)arg1 dependsOnValueAtKeyPath:(id)arg2 ;
@end

