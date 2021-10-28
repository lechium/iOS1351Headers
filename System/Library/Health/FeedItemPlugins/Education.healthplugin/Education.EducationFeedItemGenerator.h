/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/FeedItemPlugins/Education.healthplugin/Education
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthExperience/HealthExperience.AsynchronousOperation.h>
#import <Education/Education.ArticleChangeDetectorObserver.h>

@interface Education.EducationFeedItemGenerator : HealthExperience.AsynchronousOperation <Education.ArticleChangeDetectorObserver> {

	 context;
	 $__lazy_storage_$_articlesGenerator;
	 $__lazy_storage_$_onboardingGenerator;
	 workQueue;
	 articleChangeDetector;

}
-(void)readArticleWithIdentifier:(id)arg1 detectedBy:(id)arg2 ;
-(id)init;
-(void)main;
@end
