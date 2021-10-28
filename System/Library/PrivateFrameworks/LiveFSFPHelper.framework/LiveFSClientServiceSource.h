/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSFileProviderServiceSource.h>

@class NSString, LiveFSFPExtensionHelper;

@interface LiveFSClientServiceSource : NSObject <NSFileProviderServiceSource> {

	LiveFSFPExtensionHelper* ex;
	NSString* ident;

}

@property (nonatomic,copy,readonly) NSString * serviceName; 
-(NSString *)serviceName;
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2 ;
@end
