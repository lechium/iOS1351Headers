/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest;

@interface AMSCommandLineDialogTask : AMSTask {

	AMSDialogRequest* _request;
	double _maximumDialogWidth;
	double _minimumDialogWidth;
	double _dialogPadding;

}

@property (nonatomic,readonly) AMSDialogRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) double maximumDialogWidth;                 //@synthesize maximumDialogWidth=_maximumDialogWidth - In the implementation block
@property (assign,nonatomic) double minimumDialogWidth;                 //@synthesize minimumDialogWidth=_minimumDialogWidth - In the implementation block
@property (assign,nonatomic) double dialogPadding;                      //@synthesize dialogPadding=_dialogPadding - In the implementation block
-(AMSDialogRequest *)request;
-(id)present;
-(id)initWithRequest:(id)arg1 ;
-(double)dialogPadding;
-(double)minimumDialogWidth;
-(double)maximumDialogWidth;
-(id)_createHorizontolLineWithWidth:(long long)arg1 ;
-(id)_createText:(id)arg1 width:(long long)arg2 centered:(BOOL)arg3 omitLeftPipe:(BOOL)arg4 ;
-(id)_createTextfieldWithTextfield:(id)arg1 width:(long long)arg2 ;
-(id)_createLinesFromText:(id)arg1 width:(long long)arg2 ;
-(void)_printMessage:(id)arg1 ;
-(id)_gatherTextfieldInput;
-(long long)_gatherButtonInput;
-(id)_getUserInput;
-(void)setMaximumDialogWidth:(double)arg1 ;
-(void)setMinimumDialogWidth:(double)arg1 ;
-(void)setDialogPadding:(double)arg1 ;
@end

