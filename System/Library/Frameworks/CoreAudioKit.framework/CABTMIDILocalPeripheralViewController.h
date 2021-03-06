/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class AMSBTLEAdvertisementManager, NSString, UITextField, UIActivityIndicatorView, NSTimer;

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {

	AMSBTLEAdvertisementManager* advertisingManager;
	NSString* statusString;
	UITextField* serviceNameField;
	BOOL advertising;
	BOOL isErrorMessage;
	UIActivityIndicatorView* indicator;
	NSString* theServiceName;
	long long advertiseTimeout;
	long long fullRefreshCounter;
	NSTimer* advertiseTimer;
	NSTimer* messageTimer;
	BOOL didCleanup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)title;
-(void)cleanup;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)statusString;
-(void)activateController:(id)arg1 ;
-(void)stopTimers;
-(id)advertisedServiceName;
-(void)advertiseTimerFired:(id)arg1 ;
-(void)updateAdvertiseUI;
-(void)deactivateController:(id)arg1 ;
-(BOOL)advertiseServiceWithName:(id)arg1 completionBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)stopAdvertisingServiceWithCompletionBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setStatusString:(id)arg1 animateIndicator:(BOOL)arg2 isError:(BOOL)arg3 ;
-(void)textFieldDone:(id)arg1 ;
-(void)advertiseServiceSwitchToggled:(id)arg1 ;
-(BOOL)changeServiceNameTo:(id)arg1 completionBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)messageTimerFired:(id)arg1 ;
-(BOOL)disconnectLocalPeripheral;
@end

