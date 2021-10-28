/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVKeyPathDependencyHost.h>
#import <AVFoundation/AVWeakObservable.h>

@class AVKeyPathDependencyManager, AVTwoPartKeyPath, NSObject, NSString;

@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable> {

	AVKeyPathDependencyManager* _dependencyManager;
	AVTwoPartKeyPath* _dependencyKeyPath;
	NSObject* _observedObject;

}

@property (nonatomic,readonly) id dependentProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)observedObject;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(id)initForObservingValueAtKeyPath:(id)arg1 onObject:(id)arg2 ;
-(id)topLevelDependencyProperty;
-(id)dependentProperty;
@end
