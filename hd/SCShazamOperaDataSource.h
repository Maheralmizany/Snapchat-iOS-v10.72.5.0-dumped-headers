//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCOperaViewModel;

@interface SCShazamOperaDataSource : NSObject
{
    SCOperaViewModel *_topSnapViewModel;
    SCOperaViewModel *_webViewModel;
    _Bool _loadingSpinnerStopped;
    SCOperaViewModel *_rootViewModel;
}

@property(retain, nonatomic) SCOperaViewModel *rootViewModel; // @synthesize rootViewModel=_rootViewModel;
- (void).cxx_destruct;
- (void)setPropertiesError;
- (void)setPropertiesComplete;
- (void)stopWebViewLoadingSpinner;
- (id)viewModelWithWebUrl:(id)arg1 experimentManager:(id)arg2;
- (id)viewModelWithImageUrl:(id)arg1;
- (id)initWithURL:(id)arg1 experimentManager:(id)arg2;

@end

