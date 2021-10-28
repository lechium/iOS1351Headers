/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXBookmarkManager.h>

@protocol SXBookmarkManager
@required
-(void)applyBookmark:(id)arg1;

@end

#import <libobjc.A.dylib/SXBookmarkApplicatorManager.h>

@class NSMutableDictionary, NSString;

@interface SXBookmarkManager : NSObject <SXBookmarkManager, SXBookmarkApplicatorManager> {

	NSMutableDictionary* _applicators;

}

@property (nonatomic,readonly) NSMutableDictionary * applicators;              //@synthesize applicators=_applicators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)applyBookmark:(id)arg1 ;
-(void)registerApplicator:(id)arg1 bookmarkType:(Class)arg2 ;
-(NSMutableDictionary *)applicators;
@end
