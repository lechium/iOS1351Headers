/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString, NSSet;

@interface CalDAVPrincipalEmailDetailsResult : NSObject {

	NSURL* _principalURL;
	NSString* _displayName;
	NSSet* _preferredAddresses;

}

@property (nonatomic,retain) NSURL * principalURL;                    //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSSet * preferredAddresses;              //@synthesize preferredAddresses=_preferredAddresses - In the implementation block
+(id)resultFromResponseItem:(id)arg1 ;
-(id)description;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSURL *)principalURL;
-(id)addresses;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSSet *)preferredAddresses;
-(void)setPreferredAddresses:(NSSet *)arg1 ;
@end
