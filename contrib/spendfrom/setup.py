from distutils.core import setup
setup(name='utbspendfrom',
      version='1.0',
      description='Command-line utility for shahbit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@shahbitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
