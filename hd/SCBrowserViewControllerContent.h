//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SCBrowserViewControllerContent : NSObject
{
    NSURL *_url;
    NSURL *_baseURL;
    NSString *_html;
    NSString *_originalPlainText;
    NSString *_customTitle;
}

@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(copy, nonatomic) NSString *originalPlainText; // @synthesize originalPlainText=_originalPlainText;
@property(copy, nonatomic) NSString *html; // @synthesize html=_html;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)initWithPlainText:(id)arg1 customTitle:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

