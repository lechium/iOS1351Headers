/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSAppLink.h>

@class _SWCServiceDetails;

@interface _LSSharedWebCredentialsAppLink : LSAppLink {

	LSBinding* _binding;
	_SWCServiceDetails* _serviceDetails;

}

@property (nonatomic,retain) _SWCServiceDetails * serviceDetails;              //@synthesize serviceDetails=_serviceDetails - In the implementation block
@property (readonly) LSBinding* binding;                                       //@synthesize binding=_binding - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(BOOL)removeAllSettingsReturningError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)_SWCSpecifierForSettings;
-(id)_SWCSettingsReturningError:(id*)arg1 ;
-(BOOL)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(LSBinding*)binding;
-(_SWCServiceDetails *)serviceDetails;
-(void)setServiceDetails:(_SWCServiceDetails *)arg1 ;
-(BOOL)setEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setBrowserSettings:(id)arg1 error:(id*)arg2 ;
-(id)browserSettings;
-(BOOL)removeSettingsReturningError:(id*)arg1 ;
@end

