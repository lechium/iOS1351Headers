/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Montreal/MontrealNNDescription.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSString, NSNumber;

@interface MontrealNNModelQuantization : MontrealNNDescription <MontrealNNDescriptionProtocol> {

	NSString* _weightStorage;
	NSNumber* _weightStorageRange;

}

@property (readonly) NSString * weightStorage;                      //@synthesize weightStorage=_weightStorage - In the implementation block
@property (readonly) NSNumber * weightStorageRange;                 //@synthesize weightStorageRange=_weightStorageRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)weightStorage;
-(NSNumber *)weightStorageRange;
@end

