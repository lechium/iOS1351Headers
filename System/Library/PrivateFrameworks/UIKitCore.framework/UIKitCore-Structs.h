/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSMutableDictionary, _UICommandIdentifierDictionary, UIWebSelectionHandle, NSTimer, NSMutableArray, UIWebPDFView, DOMNode;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct _NSZone* NSZoneRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __GSEvent* GSEventRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	long long hour;
	long long minute;
} SCD_Struct_UI8;

typedef struct {
	SCD_Struct_UI8 beginTime;
	SCD_Struct_UI8 endTime;
} SCD_Struct_UI9;

typedef struct _compressed_pair<CGRect *, std::__1::allocator<CGRect> > {
	CGRect __value_;
} compressed_pair<CGRect *, std::__1::allocator<CGRect> >;

typedef struct vector<CGRect, std::__1::allocator<CGRect> > {
	CGRect __begin_;
	CGRect __end_;
	compressed_pair<CGRect *, std::__1::allocator<CGRect> > __end_cap_;
} vector<CGRect, std::__1::allocator<CGRect> >;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __CFString* CFStringRef;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	double field6;
	int field7;
} SCD_Struct_UI15;

typedef struct CGContext* CGContextRef;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct {
	UIEdgeInsets field1;
	UIEdgeInsets field2;
	UIEdgeInsets field3;
	UIEdgeInsets field4;
	UIEdgeInsets field5;
} SCD_Struct_UI18;

typedef struct CAColorMatrix {
	float m11;
	float m12;
	float m13;
	float m14;
	float m15;
	float m21;
	float m22;
	float m23;
	float m24;
	float m25;
	float m31;
	float m32;
	float m33;
	float m34;
	float m35;
	float m41;
	float m42;
	float m43;
	float m44;
	float m45;
} CAColorMatrix;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPath* CGPathRef;

typedef struct CATransform3D {
	double m11;
	double m12;
	double m13;
	double m14;
	double m21;
	double m22;
	double m23;
	double m24;
	double m31;
	double m32;
	double m33;
	double m34;
	double m41;
	double m42;
	double m43;
	double m44;
} CATransform3D;

typedef struct CGImage* CGImageRef;

typedef struct NSDirectionalEdgeInsets {
	double top;
	double leading;
	double bottom;
	double trailing;
} NSDirectionalEdgeInsets;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_UI25;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef struct CGColor* CGColorRef;

typedef struct {
	id field1;
	id field2;
} SCD_Struct_UI29;

typedef struct {
	unsigned field1 : 1;
} SCD_Struct_UI30;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
} SCD_Struct_UI31;

typedef struct {
	id field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	BOOL field12;
} SCD_Struct_UI32;

typedef struct shared_ptr<_UIOrderedRangeIndexerImpl> {
	_UIOrderedRangeIndexerImpl __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<_UIOrderedRangeIndexerImpl>;

typedef struct shared_ptr<_UIRTreeContainerNode> {
	_UIRTreeContainerNode __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<_UIRTreeContainerNode>;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	BOOL field3;
	double field4;
	double field5;
	double field6;
} SCD_Struct_UI35;

typedef struct _compressed_pair<UICollectionViewLayoutAttributes *__strong *, std::__1::allocator<UICollectionViewLayoutAttributes *> > {
	id __value_;
} compressed_pair<UICollectionViewLayoutAttributes *__strong *, std::__1::allocator<UICollectionViewLayoutAttributes *> >;

typedef struct vector<UICollectionViewLayoutAttributes *, std::__1::allocator<UICollectionViewLayoutAttributes *> > {
	id __begin_;
	id __end_;
	compressed_pair<UICollectionViewLayoutAttributes *__strong *, std::__1::allocator<UICollectionViewLayoutAttributes *> > __end_cap_;
} vector<UICollectionViewLayoutAttributes *, std::__1::allocator<UICollectionViewLayoutAttributes *> >;

typedef struct _compressed_pair<long *, std::__1::allocator<long> > {
	long long __value_;
} compressed_pair<long *, std::__1::allocator<long> >;

typedef struct vector<long, std::__1::allocator<long> > {
	long long __begin_;
	long long __end_;
	compressed_pair<long *, std::__1::allocator<long> > __end_cap_;
} vector<long, std::__1::allocator<long> >;

typedef struct {
	int commonRowHorizontalAlignment;
	int lastRowHorizontalAlignment;
	int rowVerticalAlignment;
} SCD_Struct_UI40;

typedef struct _compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > {
	_NSRange __value_;
} compressed_pair<_NSRange *, std::__1::allocator<_NSRange> >;

typedef struct vector<_NSRange, std::__1::allocator<_NSRange> > {
	_NSRange __begin_;
	_NSRange __end_;
	compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > __end_cap_;
} vector<_NSRange, std::__1::allocator<_NSRange> >;

typedef struct {
	BOOL field1;
	double field2;
	CGSize field3;
	CGSize field4;
	UIEdgeInsets field5;
	double field6;
	BOOL field7;
	BOOL field8;
	CGRect field9;
} SCD_Struct_UI43;

typedef struct {
	unsigned minimumTopInset : 1;
	unsigned maximumWidth : 1;
	unsigned preferredSize : 1;
	unsigned depthLevel : 1;
	unsigned bottomAttached : 1;
	unsigned percentFullScreen : 1;
	unsigned effectiveKeyboardFrame : 1;
	unsigned floatingUntransformedFrame : 1;
	unsigned bottomAttachedUntransformedFrame : 1;
	unsigned fullHeightUntransformedFrame : 1;
	unsigned stackAlignmentFrame : 1;
	unsigned dismissOffset : 1;
	unsigned activeDetents : 1;
	unsigned rubberBandExtentBeyondMinimumOffset : 1;
	unsigned rubberBandExtentBeyondMaximumOffset : 1;
	unsigned currentOffset : 1;
	unsigned percentPresented : 1;
	unsigned anyDescendantDragging : 1;
	unsigned untransformedFrame : 1;
	unsigned cornerRadii : 1;
	unsigned transform : 1;
	unsigned percentDimmedFromOffset : 1;
	unsigned percentDimmed : 1;
	unsigned shadowOpacity : 1;
	unsigned alpha : 1;
	unsigned interactionEnabled : 1;
	unsigned shouldPresentedViewControllerControlStatusBarAppearance : 1;
	unsigned shouldDimmingIgnoreTouches : 1;
	unsigned dimmedPassthroughViews : 1;
	unsigned grabberAlpha : 1;
} SCD_Struct_UI44;

typedef struct UIRectCornerRadii {
	double topLeft;
	double bottomLeft;
	double bottomRight;
	double topRight;
} UIRectCornerRadii;

typedef struct {
	BOOL didUpdateHighlightProgress;
	BOOL shouldDelayGesture;
} SCD_Struct_UI46;

typedef struct {
	BOOL animateContentRotation;
	BOOL preserveHeight;
	BOOL avoidFadingBottomOfContent;
	BOOL skipSnapshotOfEndState;
	BOOL preventAdditveAnimations;
	double contentStretchRightEdgeInset;
	int edgeClip;
} SCD_Struct_UI47;

typedef struct {
	double minimum;
	double preferred;
	double maximum;
} SCD_Struct_UI48;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	BOOL field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
} SCD_Struct_UI49;

typedef struct __DCSDictionary* DCSDictionaryRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	unsigned val[8];
} SCD_Struct_UI52;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	CGSize field6;
} SCD_Struct_UI53;

typedef struct {
	id field1;
	double field2;
	double field3;
	SCD_Struct_UI53 field4;
	SCD_Struct_UI53 field5;
	SCD_Struct_UI53 field6;
	SCD_Struct_UI53 field7;
	BOOL field8;
} SCD_Struct_UI54;

typedef struct ui_archive_entry* ui_archive_entryRef;

typedef struct ui_archive* ui_archiveRef;

typedef struct {
	float x;
	float y;
} SCD_Struct_UI57;

typedef struct {
	SCD_Struct_UI57 position;
	 color;
} SCD_Struct_UI58;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct CGSVGDocument* CGSVGDocumentRef;

typedef struct {
	BOOL regionForLocation;
	BOOL styleForRegion;
	BOOL styleForRegionModifiers;
	BOOL willEnterRegionWithAnimator;
	BOOL willExitRegionWithAnimator;
	BOOL asyncRegionForLocation;
	BOOL targetRegionForDeceleratingCursorWithRequests;
	BOOL regionForRequest;
	BOOL willEnterRegion;
	BOOL willExitRegion;
} SCD_Struct_UI62;

typedef struct {
	double field1;
	long long field2;
	double field3;
	double field4;
	double field5;
	double field6;
} SCD_Struct_UI63;

typedef struct {
	BOOL shouldBegin;
	BOOL previewForHighlighting;
	BOOL previewForDismissing;
	BOOL willPresent;
	BOOL didEnd;
	BOOL actionsForMenuSuggestedActionsPresentingWithStyle;
} SCD_Struct_UI64;

typedef struct {
	id field1;
	unsigned long long field2;
} SCD_Struct_UI65;

typedef struct {
	BOOL shouldBegin;
	BOOL didUpdateCommitTransition;
	BOOL highlighterForPreviewTransition;
	BOOL viewControllerPresentationForPresentingViewController;
	BOOL shouldFinishTransitionToPreview;
	BOOL targetedPreviewForPreviewingAtLocation;
	BOOL overrideViewForCommitPhase;
} SCD_Struct_UI66;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef const struct _UISEGestureFeatureSample* UISEGestureFeatureSampleRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
} SCD_Struct_UI69;

typedef struct CGShading* CGShadingRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
} SCD_Struct_UI72;

typedef struct {
	CGRect field1;
	CGRect field2;
	CGRect field3;
} SCD_Struct_UI73;

typedef struct {
	SCD_Struct_UI73 field1;
	SCD_Struct_UI73 field2;
	SCD_Struct_UI73 field3;
} SCD_Struct_UI74;

typedef struct UIBoundingPathBitmapDataSkipRegion {
	unsigned long long y;
	unsigned long long height;
} UIBoundingPathBitmapDataSkipRegion;

typedef struct UIBoundingPathBitmapData {
	unsigned long long width;
	unsigned long long height;
	UIBoundingPathBitmapDataSkipRegion skipRegion;
	unsigned long long nodeCount;
	unsigned long long maximumNodesPerRow;
	unsigned short rows;
} UIBoundingPathBitmapData;

typedef struct UIBoundingPathBitmapDataCorner {
	unsigned long long location;
	unsigned long long radius;
	unsigned long long size;
	BOOL edgePositionsUseLargeValues;
	void referenceEdgePositionsByRow;
	void referenceEdgePositionsByCol;
} UIBoundingPathBitmapDataCorner;

typedef struct {
	unsigned isKnown : 1;
	unsigned isSupported : 1;
	unsigned isInRange : 1;
} SCD_Struct_UI78;

typedef struct {
	long long userInterfaceIdiom;
	double displayScale;
	long long displayGamut;
	long long touchLevel;
	unsigned long long interactionModel;
	unsigned long long primaryInteractionModel;
	long long artworkSubtype;
	long long horizontalSizeClass;
	long long verticalSizeClass;
	long long userInterfaceStyle;
	long long layoutDirection;
	long long forceTouchCapability;
	long long preferredContentSizeCategory;
	double displayCornerRadius;
	long long legibilityWeight;
	long long semanticContext;
	long long presentationSemanticContext;
	long long accessibilityContrast;
	long long userInterfaceLevel;
	long long vibrancy;
	long long debugHighlight;
} SCD_Struct_UI79;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct CGGradient* CGGradientRef;

typedef struct __GSKeyboard* GSKeyboardRef;

typedef struct {
	unsigned idiom : 6;
	unsigned landscape : 1;
	unsigned split : 1;
	unsigned appearance : 8;
	unsigned rendering : 8;
	unsigned padding : 8;
} SCD_Struct_UI84;

typedef union {
	SCD_Struct_UI84 styling;
	int intValue;
} SCD_Union_UI85;

typedef struct {
	double amount;
	int unit;
} SCD_Struct_UI86;

typedef struct {
	SCD_Struct_UI86 field1[4];
} SCD_Struct_UI87;

typedef struct {
	CGPoint field1;
	double field2;
} SCD_Struct_UI88;

typedef struct {
	CGPoint point;
	double force;
} SCD_Struct_UI89;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct {
	unsigned long long field1;
	CGPoint field2;
	NSRange field3;
	unsigned long long field4;
} SCD_Struct_UI91;

typedef struct {
	CGRect field1;
	CGRect field2;
} SCD_Struct_UI92;

typedef struct UIPeripheralAnimationGeometry {
	CGPoint outPosition;
	CGPoint inPosition;
	CGRect bounds;
	CGAffineTransform transform;
	double targetFrameHeightDelta;
} UIPeripheralAnimationGeometry;

typedef struct __CTLine* CTLineRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_UI95;

typedef union GLKVector3 {
	SCD_Struct_UI95 field1;
	SCD_Struct_UI95 field2;
	SCD_Struct_UI95 field3;
	float v[3];
} GLKVector3;

typedef struct {
	GLKVector3 v;
	float s;
} SCD_Struct_UI97;

typedef struct {
	float x;
	float y;
	float z;
	float w;
} SCD_Struct_UI98;

typedef union GLKQuaternion {
	SCD_Struct_UI97 field1;
	SCD_Struct_UI98 field2;
	float q[4];
} GLKQuaternion;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	BOOL shouldBegin;
	BOOL previewForHighlightingAtLocation;
	BOOL shouldPresent;
	BOOL ended;
	BOOL asyncShouldBegin;
	BOOL shouldAllowRapidRestart;
	BOOL shouldAllowDragAfterDismiss;
	BOOL previewForCancellingDragItem;
	BOOL willAnimateDragCancelWithAnimator;
	BOOL dragSessionDidEndForItems;
	BOOL interactionEffectForTargetedPreview;
	BOOL endedForPresentation;
} SCD_Struct_UI101;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFMessagePort* CFMessagePortRef;

typedef struct {
	NSMutableSet* keyCommands;
	NSMutableSet* menus;
	NSMutableDictionary* actions;
	_UICommandIdentifierDictionary* commands;
	NSMutableDictionary* parentMenuIdentifiers;
	_UICommandIdentifierDictionary* commandParentMenuIdentifiers;
} SCD_Struct_UI105;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	id field6;
} SCD_Struct_UI106;

typedef struct {
	unsigned long long senderID;
	double controllerState[16];
	double normalizedLeftStickState[4];
	double normalizedRightStickState[4];
	double normalizedShoulderButtonState[4];
} SCD_Struct_UI107;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	BOOL field3;
	unsigned long long field4;
	id field5;
	/*function pointer*/void* field6;
	id field7;
	/*function pointer*/void* field8;
} SCD_Struct_UI108;

typedef struct {
	BOOL field1[42];
	char field2[64];
	char field3[64];
	char field4[256];
	int field5;
	int field6;
	int field7;
	int field8;
	char field9[100];
	char field10[100];
	char field11[100];
	char field12[100];
	char field13[100];
	char field14[2][1024];
	unsigned field15;
	unsigned field16;
	unsigned field17 : 1;
	unsigned field18 : 1;
	int field19;
	int field20;
	unsigned field21 : 1;
	unsigned field22;
	unsigned field23;
	int field24;
	unsigned field25;
	char field26[150];
	int field27;
	int field28;
	unsigned field29 : 1;
	unsigned field30 : 1;
	unsigned field31 : 1;
	char field32[256];
	unsigned field33 : 1;
	unsigned field34 : 1;
	unsigned field35 : 1;
	unsigned field36 : 1;
	unsigned field37 : 2;
	unsigned field38 : 1;
	unsigned field39;
	unsigned field40 : 1;
	unsigned field41 : 1;
	unsigned field42 : 1;
	char field43[256];
	char field44[256];
	char field45[100];
	unsigned field46 : 1;
	unsigned field47 : 1;
	unsigned field48 : 1;
	unsigned field49 : 1;
	double field50;
	unsigned field51 : 1;
	unsigned field52 : 1;
	char field53[100];
	char field54[100];
} SCD_Struct_UI109;

typedef struct {
	BOOL itemIsEnabled[42];
	char timeString[64];
	char shortTimeString[64];
	char dateString[256];
	int gsmSignalStrengthRaw;
	int secondaryGsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	int secondaryGsmSignalStrengthBars;
	char serviceString[100];
	char secondaryServiceString[100];
	char serviceCrossfadeString[100];
	char secondaryServiceCrossfadeString[100];
	char serviceImages[2][100];
	char operatorDirectory[1024];
	unsigned serviceContentType;
	unsigned secondaryServiceContentType;
	unsigned cellLowDataModeActive : 1;
	unsigned secondaryCellLowDataModeActive : 1;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned wifiLowDataModeActive : 1;
	unsigned dataNetworkType;
	unsigned secondaryDataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	char batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	char activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned voiceControlIconType : 2;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
	unsigned batterySaverModeActive : 1;
	unsigned deviceIsRTL : 1;
	unsigned lock : 1;
	char breadcrumbTitle[256];
	char breadcrumbSecondaryTitle[256];
	char personName[100];
	unsigned electronicTollCollectionAvailable : 1;
	unsigned radarAvailable : 1;
	unsigned wifiLinkWarning : 1;
	unsigned wifiSearching : 1;
	double backgroundActivityDisplayStartDate;
	unsigned shouldShowEmergencyOnlyStatus : 1;
	unsigned secondaryCellularConfigured : 1;
	char primaryServiceBadgeString[100];
	char secondaryServiceBadgeString[100];
} SCD_Struct_UI110;

typedef struct {
	BOOL overrideItemIsEnabled[42];
	unsigned overrideTimeString : 1;
	unsigned overrideDateString : 1;
	unsigned overrideGsmSignalStrengthRaw : 1;
	unsigned overrideSecondaryGsmSignalStrengthRaw : 1;
	unsigned overrideGsmSignalStrengthBars : 1;
	unsigned overrideSecondaryGsmSignalStrengthBars : 1;
	unsigned overrideServiceString : 1;
	unsigned overrideSecondaryServiceString : 1;
	unsigned overrideServiceImages : 2;
	unsigned overrideOperatorDirectory : 1;
	unsigned overrideServiceContentType : 1;
	unsigned overrideSecondaryServiceContentType : 1;
	unsigned overrideWifiSignalStrengthRaw : 1;
	unsigned overrideWifiSignalStrengthBars : 1;
	unsigned overrideDataNetworkType : 1;
	unsigned overrideSecondaryDataNetworkType : 1;
	unsigned disallowsCellularDataNetworkTypes : 1;
	unsigned overrideBatteryCapacity : 1;
	unsigned overrideBatteryState : 1;
	unsigned overrideBatteryDetailString : 1;
	unsigned overrideBluetoothBatteryCapacity : 1;
	unsigned overrideThermalColor : 1;
	unsigned overrideSlowActivity : 1;
	unsigned overrideActivityDisplayId : 1;
	unsigned overrideBluetoothConnected : 1;
	unsigned overrideBreadcrumb : 1;
	unsigned overrideLock;
	unsigned overrideDisplayRawGSMSignal : 1;
	unsigned overrideDisplayRawWifiSignal : 1;
	unsigned overridePersonName : 1;
	unsigned overrideWifiLinkWarning : 1;
	unsigned overrideSecondaryCellularConfigured : 1;
	unsigned overridePrimaryServiceBadgeString : 1;
	unsigned overrideSecondaryServiceBadgeString : 1;
	SCD_Struct_UI110 values;
} SCD_Struct_UI111;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct {
	BOOL field1[42];
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 2;
	unsigned field11 : 1;
	unsigned field12 : 1;
	unsigned field13 : 1;
	unsigned field14 : 1;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
	unsigned field18 : 1;
	unsigned field19 : 1;
	unsigned field20 : 1;
	unsigned field21 : 1;
	unsigned field22 : 1;
	unsigned field23 : 1;
	unsigned field24 : 1;
	unsigned field25 : 1;
	unsigned field26 : 1;
	unsigned field27 : 1;
	unsigned field28;
	unsigned field29 : 1;
	unsigned field30 : 1;
	unsigned field31 : 1;
	unsigned field32 : 1;
	unsigned field33 : 1;
	unsigned field34 : 1;
	unsigned field35 : 1;
	SCD_Struct_UI110 field36;
} SCD_Struct_UI113;

typedef struct {
	unsigned long long field1;
	BOOL field2;
	BOOL field3;
	double field4;
	double field5;
} SCD_Struct_UI114;

typedef struct {
	unsigned long long direction;
	unsigned long long targetSwipeState;
	BOOL animated;
	double xOffset;
	double initialSpringVelocity;
	double springStiffness;
} SCD_Struct_UI115;

typedef struct {
	unsigned long long direction;
	BOOL primaryActionIsDestructive;
	BOOL primaryActionCanBeTriggeredBySwipe;
	double openThreshold;
	double confirmationThreshold;
} SCD_Struct_UI116;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct __CTFontDescriptor* CTFontDescriptorRef;

typedef struct {
	UIWebSelectionHandle* scrollingHandle;
	double startTime;
	int direction;
	NSTimer* timer;
} SCD_Struct_UI119;

typedef struct {
	BOOL flipPossible;
	BOOL rectsChanged;
	CGRect originalSelectionRect;
} SCD_Struct_UI120;

typedef struct {
	UIWebSelectionHandle* start;
	UIWebSelectionHandle* end;
	CGSize startingOffset;
	BOOL anchorAtStart;
	SCD_Struct_UI120 flipData;
} SCD_Struct_UI121;

typedef struct __CFSet* CFSetRef;

typedef struct objc_ivar* objc_ivarRef;

typedef struct {
	CGPoint field1;
	unsigned long long field2;
} SCD_Struct_UI124;

typedef struct _compressed_pair<ui_size_cache_value *, std::__1::allocator<ui_size_cache_value> > {
	/*function pointer*/void* __value_;
} compressed_pair<ui_size_cache_value *, std::__1::allocator<ui_size_cache_value> >;

typedef struct ui_size_cache {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<ui_size_cache_value *, std::__1::allocator<ui_size_cache_value> > __end_cap_;
} ui_size_cache;

typedef struct {
	double field1;
	double field2;
	CGRect field3;
	long long field4;
} SCD_Struct_UI127;

typedef struct {
	SCD_Struct_UI48 field1;
	SCD_Struct_UI48 field2;
	SCD_Struct_UI48 field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
} SCD_Struct_UI128;

typedef struct {
	CGSize field1;
	CGSize field2;
	double field3;
	double field4;
} SCD_Struct_UI129;

typedef struct {
	CGSize field1;
	CGSize field2;
	SCD_Struct_UI129 field3;
} SCD_Struct_UI130;

typedef struct {
	CGSize dampingRatioState;
	CGSize responseState;
	double tension;
	double friction;
} SCD_Struct_UI131;

typedef struct {
	SCD_Struct_UI48 dampingRatioParameters;
	SCD_Struct_UI48 responseParameters;
	SCD_Struct_UI48 targetParameters;
	BOOL dampingRatioSmoothingDisabled;
	BOOL responseSmoothingDisabled;
	BOOL targetSmoothingDisabled;
} SCD_Struct_UI132;

typedef struct {
	double field1;
	double field2;
	BOOL field3;
	BOOL field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
} SCD_Struct_UI133;

typedef struct {
	double dampingRatio;
	double response;
	BOOL initialDampingRatioSpecified;
	BOOL initialResponseSpecified;
	double initialDampingRatio;
	double initialResponse;
	double dampingRatioSmoothing;
	double responseSmoothing;
	double targetSmoothing;
	double projectionDeceleration;
	double impulse;
} SCD_Struct_UI134;

typedef struct {
	double rotationX;
	double rotationY;
	double rotationZ;
	double scaleX;
	double scaleY;
	double scaleZ;
	double translationX;
	double translationY;
	double translationZ;
} SCD_Struct_UI135;

typedef struct {
	double firstBaseline;
	double lastBaseline;
	CGRect referenceBounds;
	long long measuredNumberOfLines;
} SCD_Struct_UI136;

typedef struct __CTFrame* CTFrameRef;

typedef struct __CTRun* CTRunRef;

typedef struct {
	NSMutableArray* all;
	NSMutableArray* html;
	NSMutableArray* javascript;
	NSMutableArray* css;
	NSMutableArray* error;
	NSMutableArray* warning;
	NSMutableArray* tip;
	NSMutableArray* log;
} SCD_Struct_UI139;

typedef struct {
	UIWebPDFView* view;
	NSTimer* timer;
} SCD_Struct_UI140;

typedef struct {
	NSTimer* timer;
	CGPoint location;
	long long modifierFlags;
	BOOL isBlocked;
	BOOL isCancelled;
	BOOL isOnWebThread;
	BOOL isDisplayingHighlight;
	BOOL attemptedClick;
	CGPoint lastPanTranslation;
	DOMNode* element;
	id delegate;
	id interactionSheet;
	 UIWebRotatingAlertController;
	BOOL allowsImageSheet;
	BOOL allowsDataDetectorsSheet;
	BOOL allowsLinkSheet;
	BOOL acceptsFirstResponder;
	double documentScale;
	id previewHintRects;
	 NSArray;
	id previewHintImage;
	 UIImage;
} SCD_Struct_UI141;

typedef struct UIWebViewportConfiguration {
	CGSize size;
	float initialScale;
	float minimumScale;
	float maximumScale;
	BOOL allowsUserScaling;
	BOOL allowsShrinkToFit;
	BOOL avoidsUnsafeArea;
} UIWebViewportConfiguration;

typedef struct PDFHistoryItem {
	BOOL restorePending;
	BOOL isInitialScale;
	double zoomScale;
	CGPoint contentOffset;
} PDFHistoryItem;

typedef struct __CTFont* CTFontRef;

typedef struct CGPDFFont* CGPDFFontRef;

typedef struct {
	BOOL previewForHighlighting;
	BOOL previewForDismissing;
	BOOL willPerformPreviewActionForMenuWithConfiguration;
	BOOL willDisplayMenuForConfiguration;
	BOOL willEndForConfiguration;
	BOOL styleForMenuWithConfiguration;
	BOOL accessoriesForMenuWithConfiguration;
	BOOL failedToBeginForSecondaryClickAtLocation;
	BOOL asyncConfigurationForMenuAtLocation;
	BOOL overrideSuggestedActions;
	BOOL shouldAllowDragAfterDismiss;
	BOOL interactionEffectForTargetedPreview;
	BOOL shouldAttemptToPresentConfiguration;
	BOOL willCommit;
	BOOL willPresent;
	BOOL didEnd;
} SCD_Struct_UI146;

typedef struct UIWebTouchEvent {
	int type;
	double timestamp;
	CGPoint locationInScreenCoordinates;
	CGPoint locationInDocumentCoordinates;
	double scale;
	double rotation;
	BOOL inJavaScriptGesture;
	_UIWebTouchPoint touchPoints;
	unsigned touchPointCount;
	BOOL isPotentialTap;
} UIWebTouchEvent;

