/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PUEditingExtensionUndoTarget.h>

@protocol PUEditingExtensionUndoButtonHost;
@class NSUndoManager, NSString;

@interface PUEditingExtensionUndoAdapter : NSObject <PUEditingExtensionUndoTarget> {

	id<PUEditingExtensionUndoButtonHost> _buttonHost;
	NSUndoManager* _undoManager;

}

@property (nonatomic,readonly) id<PUEditingExtensionUndoButtonHost> buttonHost;              //@synthesize buttonHost=_buttonHost - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                                    //@synthesize undoManager=_undoManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(void)_updateButtonState;
-(id)initWithButtonHost:(id)arg1 ;
-(void)performUndo;
-(void)performRedo;
-(void)_registerForUndoManagerNotifications:(id)arg1 ;
-(void)_unregisterForUndoManagerNotifications:(id)arg1 ;
-(id<PUEditingExtensionUndoButtonHost>)buttonHost;
@end
