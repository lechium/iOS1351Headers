/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NFReaderSessionDelegate.h>

@class NSString;

@interface WKNFReaderSessionDelegate : NSObject <NFReaderSessionDelegate> {

	WeakPtr<WebKit::NfcConnection>* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(NfcConnection*)arg1 ;
-(void)readerSession:(id)arg1 didDetectTags:(id)arg2 ;
@end
