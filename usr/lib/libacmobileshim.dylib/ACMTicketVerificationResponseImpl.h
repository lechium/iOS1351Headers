/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libacmobileshim.dylib/ACMAuthenticationResponseImpl.h>
#import <libobjc.A.dylib/ACMTicketVerificationResponse.h>

@class NSNumber, NSDictionary, NSError, NSString;

@interface ACMTicketVerificationResponseImpl : ACMAuthenticationResponseImpl <ACMTicketVerificationResponse>

@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (retain) id userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) NSNumber * personDSID; 
-(NSNumber *)personDSID;
@end

