//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSString, SCOperaPage;

@interface SCOperaInteractionButtonsLayer : NSObject <SCOperaLayer>
{
    _Bool _showCameraButton;
    _Bool _showEditButton;
    _Bool _showSendButton;
    _Bool _showBoomboxButton;
    _Bool _showSaveButton;
    SCOperaPage *_page;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) _Bool showSaveButton; // @synthesize showSaveButton=_showSaveButton;
@property(readonly, nonatomic) _Bool showBoomboxButton; // @synthesize showBoomboxButton=_showBoomboxButton;
@property(readonly, nonatomic) _Bool showSendButton; // @synthesize showSendButton=_showSendButton;
@property(readonly, nonatomic) _Bool showEditButton; // @synthesize showEditButton=_showEditButton;
@property(readonly, nonatomic) _Bool showCameraButton; // @synthesize showCameraButton=_showCameraButton;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

