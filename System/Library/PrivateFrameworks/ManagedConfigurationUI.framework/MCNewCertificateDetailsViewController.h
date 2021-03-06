/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class NSArray, NSString;

@interface MCNewCertificateDetailsViewController : UITableViewController <PSStateRestoration> {

	id _certificateTrust;
	NSArray* _keyValueSections;
	NSArray* _keyValueSectionTitles;

}

@property (nonatomic,retain) id certificateTrust;                          //@synthesize certificateTrust=_certificateTrust - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;                   //@synthesize keyValueSections=_keyValueSections - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSectionTitles;              //@synthesize keyValueSectionTitles=_keyValueSectionTitles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(BOOL)canBeShownFromSuspendedState;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(id)certificateTrust;
-(void)setCertificateTrust:(id)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(NSArray *)keyValueSections;
-(NSArray *)keyValueSectionTitles;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(void)setKeyValueSectionTitles:(NSArray *)arg1 ;
@end

