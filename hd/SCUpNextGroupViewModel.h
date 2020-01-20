//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCUpNextGroupThumbnailViewModel, SCUpNextGroupViewModelLoggingInfo;

@interface SCUpNextGroupViewModel : NSObject
{
    NSString *_debugDescription;
    _Bool _isHidden;
    _Bool _recommended;
    NSString *_identifier;
    SCUpNextGroupThumbnailViewModel *_thumbnailViewModel;
    SCUpNextGroupViewModelLoggingInfo *_loggingInfo;
}

@property(nonatomic) _Bool recommended; // @synthesize recommended=_recommended;
@property(readonly, nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, nonatomic) SCUpNextGroupViewModelLoggingInfo *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(readonly, nonatomic) SCUpNextGroupThumbnailViewModel *thumbnailViewModel; // @synthesize thumbnailViewModel=_thumbnailViewModel;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithIdentifier:(id)arg1 isHidden:(_Bool)arg2 thumbnailViewModel:(id)arg3 loggingInfo:(id)arg4 debugDescription:(id)arg5;
- (id)initWithIdentifier:(id)arg1 thumbnailViewModel:(id)arg2 loggingInfo:(id)arg3 debugDescription:(id)arg4;

@end

