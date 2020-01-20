//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCWebBrowsingModuleExperimentContext : SCExperimentContext
{
    _Bool _enableWebModule;
    NSString *_chatBrowser;
    NSString *_bottomSnapAdsBrowser;
    NSString *_bottomSnapOrganicBrowser;
    NSString *_scanBrowser;
    NSString *_unlockableAttachmentsBrowser;
    NSString *_contextCardsBrowser;
    NSString *_browserProgressStyle;
    NSString *_browserToolbarRightButtonStyle;
}

@property(readonly, nonatomic) NSString *browserToolbarRightButtonStyle; // @synthesize browserToolbarRightButtonStyle=_browserToolbarRightButtonStyle;
@property(readonly, nonatomic) NSString *browserProgressStyle; // @synthesize browserProgressStyle=_browserProgressStyle;
@property(retain, nonatomic) NSString *contextCardsBrowser; // @synthesize contextCardsBrowser=_contextCardsBrowser;
@property(retain, nonatomic) NSString *unlockableAttachmentsBrowser; // @synthesize unlockableAttachmentsBrowser=_unlockableAttachmentsBrowser;
@property(retain, nonatomic) NSString *scanBrowser; // @synthesize scanBrowser=_scanBrowser;
@property(retain, nonatomic) NSString *bottomSnapOrganicBrowser; // @synthesize bottomSnapOrganicBrowser=_bottomSnapOrganicBrowser;
@property(retain, nonatomic) NSString *bottomSnapAdsBrowser; // @synthesize bottomSnapAdsBrowser=_bottomSnapAdsBrowser;
@property(retain, nonatomic) NSString *chatBrowser; // @synthesize chatBrowser=_chatBrowser;
@property(nonatomic) _Bool enableWebModule; // @synthesize enableWebModule=_enableWebModule;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end

