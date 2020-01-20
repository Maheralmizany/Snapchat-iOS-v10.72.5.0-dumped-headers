//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityItemProvider.h"

#import "SCActivityItemProviding.h"

@class NSArray, NSObject<OS_dispatch_semaphore>, NSString, NSURL, SCGalleryUserContext, SCUserSession;

@interface SCGalleryActivityItemProvider : UIActivityItemProvider <SCActivityItemProviding>
{
    id _item;
    NSObject<OS_dispatch_semaphore> *_itemSemaphore;
    NSURL *_itemURL;
    _Bool _uploadToYouTube;
    float _progressWeight;
    SCGalleryUserContext *_userContext;
    SCUserSession *_userSession;
    id <SCGalleryActivityItemProviderDelegate> _delegate;
    long long _itemCount;
    NSArray *_skippedActivityTypes;
    NSString *_designatedActivityType;
    long long _spectaclesExportFormat;
    id <SCGalleryOperaMagicMomentCaching> _magicMomentCache;
}

@property(nonatomic) __weak id <SCGalleryOperaMagicMomentCaching> magicMomentCache; // @synthesize magicMomentCache=_magicMomentCache;
@property(nonatomic) _Bool uploadToYouTube; // @synthesize uploadToYouTube=_uploadToYouTube;
@property(nonatomic) long long spectaclesExportFormat; // @synthesize spectaclesExportFormat=_spectaclesExportFormat;
@property(copy, nonatomic) NSString *designatedActivityType; // @synthesize designatedActivityType=_designatedActivityType;
@property(copy, nonatomic) NSArray *skippedActivityTypes; // @synthesize skippedActivityTypes=_skippedActivityTypes;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) float progressWeight; // @synthesize progressWeight=_progressWeight;
@property(nonatomic) __weak id <SCGalleryActivityItemProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCGalleryUserContext *userContext; // @synthesize userContext=_userContext;
- (void).cxx_destruct;
- (void)didGenerateItem:(id)arg1;
- (id)item;
- (void)dealloc;
- (id)initWithPlaceholderItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
