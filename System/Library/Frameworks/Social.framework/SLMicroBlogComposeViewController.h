/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Social.framework/Social
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Social/Social-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/SLMicroBlogMentionsDelegate.h>
#import <libobjc.A.dylib/SLMicroBlogAccountsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/SLSheetPlaceViewControllerDelegate.h>

@protocol SLMicroBlogSheetDelegate;
@class NSObject, NSString, SLMicroBlogMentionsViewController, NSArray, SLMicroBlogUserRecord, SLComposeSheetConfigurationItem, SLMicroBlogAccountsTableViewController, SLSheetPlaceViewController, SLPlace;

@interface SLMicroBlogComposeViewController : SLComposeServiceViewController <UITextViewDelegate, SLMicroBlogMentionsDelegate, SLMicroBlogAccountsTableViewControllerDelegate, SLSheetPlaceViewControllerDelegate> {

	NSObject*<SLMicroBlogSheetDelegate> _microBlogSheetDelegate;
	NSString* _serviceAccountTypeIdentifier;
	SLMicroBlogMentionsViewController* _mentionsViewController;
	unsigned long long _mentionStartLocation;
	BOOL _mentionPendingStart;
	BOOL _rotatedDuringAccountsPopover;
	BOOL _usingLocationOverride;
	NSArray* _accountUserRecords;
	NSArray* _accountIdentifiers;
	SLMicroBlogUserRecord* _selectedAccountUserRecord;
	SLComposeSheetConfigurationItem* _accountConfigurationItem;
	SLComposeSheetConfigurationItem* _locationConfigurationItem;
	SLMicroBlogAccountsTableViewController* _accountViewController;
	SLSheetPlaceViewController* _placeViewController;
	SLPlace* _currentPlace;
	long long _shortenedURLCost;
	long long _maxURLLength;
	BOOL _isPresentingPlaces;

}

@property (__weak) NSObject*<SLMicroBlogSheetDelegate> microBlogSheetDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceBundle;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)setGeotagStatus:(int)arg1 ;
-(void)placeViewController:(id)arg1 didSelectPlace:(id)arg2 ;
-(void)placeViewController:(id)arg1 willDisappear:(BOOL)arg2 ;
-(void)_presentPlaceViewController;
-(void)didSelectPost;
-(id)configurationItems;
-(BOOL)isContentValid;
-(void)presentationAnimationDidFinish;
-(id)_placeViewController;
-(void)updateShortenedURLCost;
-(NSObject*<SLMicroBlogSheetDelegate>)microBlogSheetDelegate;
-(void)noteLocationInfoChanged:(id)arg1 ;
-(void)updateGeotagStatus;
-(void)_beginLoadingAccountProfileImages;
-(void)_presentAccountPickerController;
-(void)_performLocationAction;
-(id)_accountConfigurationItem;
-(id)_locationConfigurationItem;
-(void)_presentNoAccountsAlertIfNecessaryAndReady;
-(void)presentNoAccountsAlert;
-(int)characterCountForEnteredText:(id)arg1 attachments:(id)arg2 ;
-(int)_charactersRemainingWithText:(id)arg1 ;
-(id)completeText:(id)arg1 withAttachments:(id)arg2 ;
-(long long)_characterCountForText:(id)arg1 ;
-(BOOL)_countMediaAttachmentsTowardCharacterCount;
-(id)_mentionsSearchString;
-(void)_presentMentionsViewControllerWithSearchString:(id)arg1 ;
-(void)applyMention:(id)arg1 ;
-(void)_dismissMentionsViewController;
-(void)_presentMentionsViewControllerIfApplicableForSearchString:(id)arg1 ;
-(void)mentionsViewController:(id)arg1 finishedWithResult:(id)arg2 ;
-(void)accountsViewController:(id)arg1 didSelectAccountUserRecord:(id)arg2 ;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)setMicroBlogSheetDelegate:(NSObject*<SLMicroBlogSheetDelegate>)arg1 ;
@end

