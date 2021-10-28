/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NearField/NFSession.h>

@interface NFTrustSession : NFSession
-(id)createKey:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(id)getKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteKey:(id)arg1 error:(id*)arg2 ;
-(id)signWithKey:(id)arg1 request:(id)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(id)listKeys:(id*)arg1 ;
-(id)signWithKey:(id)arg1 request:(id)arg2 paymentRequest:(id)arg3 authorization:(id)arg4 error:(id*)arg5 ;
@end
