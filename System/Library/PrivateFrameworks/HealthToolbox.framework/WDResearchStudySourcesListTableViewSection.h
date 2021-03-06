/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthToolbox/WDSourcesListTableViewSection.h>

@class NSArray;

@interface WDResearchStudySourcesListTableViewSection : WDSourcesListTableViewSection {

	NSArray* _researchSources;

}

@property (nonatomic,copy) NSArray * researchSources;              //@synthesize researchSources=_researchSources - In the implementation block
-(unsigned long long)numberOfRows;
-(id)titleForHeader;
-(id)noneString;
-(id)titleForFooter;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setResearchSources:(NSArray *)arg1 ;
-(NSArray *)researchSources;
-(id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)dataSourceDidUpdate;
@end

