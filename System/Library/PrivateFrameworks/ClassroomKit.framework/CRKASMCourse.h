/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class DMFControlGroupIdentifier, NSString, NSArray, NSSet;


@protocol CRKASMCourse
@property (nonatomic,copy,readonly) DMFControlGroupIdentifier * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long mascot; 
@property (nonatomic,readonly) unsigned long long color; 
@property (nonatomic,readonly) id<CRKASMLocation> location; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (nonatomic,readonly) id<CRKIdentity> identity; 
@property (nonatomic,copy,readonly) NSArray * trustedUsers; 
@property (nonatomic,copy,readonly) NSSet * allTrustedUserCertificates; 
@required
-(NSString *)name;
-(DMFControlGroupIdentifier *)identifier;
-(id<CRKASMLocation>)location;
-(id<CRKIdentity>)identity;
-(unsigned long long)color;
-(BOOL)isEditable;
-(unsigned long long)mascot;
-(NSArray *)trustedUsers;
-(NSSet *)allTrustedUserCertificates;

@end
