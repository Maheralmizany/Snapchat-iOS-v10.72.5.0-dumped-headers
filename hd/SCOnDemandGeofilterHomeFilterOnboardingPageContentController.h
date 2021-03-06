//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIImageView, UILabel, UIView;

@interface SCOnDemandGeofilterHomeFilterOnboardingPageContentController : UIViewController
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_heroImageView;
    UIView *subView;
    unsigned long long _pageIndex;
    NSString *_txtTitle;
    NSString *_subTitle;
    NSString *_bitmojiTemplateId;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
}

@property(retain, nonatomic) id <SCOnDemandGeofilterSessionProtocol> geofilterSession; // @synthesize geofilterSession=_geofilterSession;
@property(retain) NSString *bitmojiTemplateId; // @synthesize bitmojiTemplateId=_bitmojiTemplateId;
@property(retain) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain) NSString *txtTitle; // @synthesize txtTitle=_txtTitle;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithGeofilterSession:(id)arg1;

@end

