/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/_UTTypeQuery.h>

@class NSString;

@interface _UTTypeQueryWithIdentifier : _UTTypeQuery {

	NSString* _identifier;
	BOOL _dynamic;
	BOOL _valid;

}
+(BOOL)supportsSecureCoding;
+(id)_typeCache;
+(void)_precacheTypesForIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)_canResolveLocallyWithoutMappingDatabase;
-(BOOL)getLocallyResolvedType:(id*)arg1 orErrorWithoutMappingDatabase:(id*)arg2 ;
-(id)resolve;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
@end
