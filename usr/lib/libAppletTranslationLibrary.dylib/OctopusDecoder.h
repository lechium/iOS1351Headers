/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libAppletTranslationLibrary.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface OctopusDecoder : NSObject
+(id)getTransactionTypeStringFromCode:(unsigned char)arg1 andServiceProviderID:(unsigned char)arg2 ;
+(int)isTransitTransactionCode:(unsigned char)arg1 ;
+(id)getTransactionTypeModifierStringFromCode:(unsigned char)arg1 ;
+(BOOL)isTopUpTransaction:(unsigned char)arg1 ;
+(id)getTransitTransactionTypeNameFromCode:(unsigned char)arg1 andServiceProvider:(unsigned short)arg2 ;
+(id)getPurseBalance:(id)arg1 ;
+(id)parseTLOGBlock:(id)arg1 withBaseDate:(id)arg2 ;
+(id)injectTLOGAAVS:(id)arg1 withAAVSAmount:(id)arg2 andBalance:(id)arg3 ;
+(id)getLoyaltyBalance:(id)arg1 ;
+(id)getNegativeValueLimit:(id)arg1 ;
+(id)getBaseDate:(id)arg1 ;
+(id)getPhysicalID:(id)arg1 ;
+(id)getAAVSAmount:(id)arg1 ;
+(int)isBlackListed:(id)arg1 ;
+(int)getEnRouteStatus:(id)arg1 ;
+(int)filterHistoryEntry:(id)arg1 ;
@end
