//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMediaCardViewModel.h"

#import "SCChatPhoneMediaCardViewModel.h"

@class NSString;

@interface SCPhoneMediaCardViewModel : SCMediaCardViewModel <SCChatPhoneMediaCardViewModel>
{
    NSString *_phoneNumber;
}

@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)defaultThumbnailImage;
- (long long)type;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 isGrayScale:(_Bool)arg3 shouldActOnGesture:(_Bool)arg4 phoneNumber:(id)arg5 disableContextMenu:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

