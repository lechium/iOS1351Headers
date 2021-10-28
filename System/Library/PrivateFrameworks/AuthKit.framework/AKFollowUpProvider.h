/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AKFollowUpProvider <NSObject>
@required
-(BOOL)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(id)pendingAuthKitFollowUpItems:(id*)arg1;
-(BOOL)removeAllAuthKitFollowUpItems:(id*)arg1;
-(BOOL)addFollowUpItems:(id)arg1 error:(id*)arg2;
-(BOOL)removeFollowUpItems:(id)arg1 error:(id*)arg2;
-(BOOL)clearNotificationsForItem:(id)arg1 error:(id*)arg2;

@end
