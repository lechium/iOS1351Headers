/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol CRKASMRosterProviding <NSObject>
@property (nonatomic,readonly) id<CRKASMRoster> roster; 
@property (getter=isPopulated,nonatomic,readonly) BOOL populated; 
@property (nonatomic,readonly) id<CRKASMUserDirectory> userDirectory; 
@property (nonatomic,copy,readonly) NSArray * locationsWithManagePermissions; 
@required
-(void)refresh;
-(BOOL)isPopulated;
-(BOOL)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3;
-(id<CRKASMRoster>)roster;
-(NSArray *)locationsWithManagePermissions;
-(void)createCourseWithProperties:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeCourseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(/*^block*/id)arg3;
-(id<CRKASMUserDirectory>)userDirectory;

@end

