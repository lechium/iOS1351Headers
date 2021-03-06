/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage {

	BOOL _needsNetwork;
	NSSet* _unauthenticatedAccountServices;

}

@property (assign,nonatomic) BOOL needsNetwork;                                 //@synthesize needsNetwork=_needsNetwork - In the implementation block
@property (nonatomic,copy) NSSet * unauthenticatedAccountServices;              //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(void)setNeedsNetwork:(BOOL)arg1 ;
-(NSSet *)unauthenticatedAccountServices;
-(id)_stringFromAccountServices:(id)arg1 ;
-(BOOL)needsNetwork;
@end

