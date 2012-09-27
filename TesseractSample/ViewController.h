//
//  ViewController.h
//  TesseractSample
//
//  Created by Ângelo Suzuki on 11/1/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@class MBProgressHUD;

namespace tesseract {
    class TessBaseAPI;
};

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    MBProgressHUD *progressHud;
    
    UIImagePickerController *imagePickerController;
    
    NSMutableData *responseData;
    NSMutableArray *translations;
    NSString *_lastText;

    
    tesseract::TessBaseAPI *tesseract;
    uint32_t *pixels;
}

@property (nonatomic, strong) MBProgressHUD *progressHud;
@property (nonatomic, copy) NSString * lastText;

- (void)setTesseractImage:(UIImage *)image;


- (IBAction) findPhoto:(id) sender;
- (IBAction) takePhoto:(id) sender;

@end
