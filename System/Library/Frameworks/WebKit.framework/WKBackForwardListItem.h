/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, NSString;

@interface WKBackForwardListItem : NSObject <WKObject> {

	ObjectStorage<WebKit::WebBackForwardListItem> _item;

}

@property (readonly) WebBackForwardListItem* _item; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * title; 
@property (copy,readonly) NSURL * initialURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(WebBackForwardListItem*)_item;
-(NSURL *)URL;
-(NSString *)title;
-(CGPoint)_scrollPosition;
-(Object*)_apiObject;
-(NSURL *)initialURL;
-(CGImageRef)_copySnapshotForTesting;
@end
