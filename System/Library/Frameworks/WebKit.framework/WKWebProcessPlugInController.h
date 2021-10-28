/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKConnection, NSString;

@interface WKWebProcessPlugInController : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundle> _bundle;
	RetainPtr<id<WKWebProcessPlugIn> >* _principalClassInstance;

}

@property (readonly) OpaqueWKBundleRef _bundleRef; 
@property (readonly) WKConnection * connection; 
@property (readonly) id parameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(WKConnection *)connection;
-(id)parameters;
-(Object*)_apiObject;
-(void)_setPrincipalClassInstance:(id)arg1 ;
-(void)extendClassesForParameterCoder:(id)arg1 ;
-(OpaqueWKBundleRef)_bundleRef;
@end
